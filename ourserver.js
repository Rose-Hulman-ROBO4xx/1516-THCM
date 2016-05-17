// Libraries and all that stuff
var http = require('http');
var url = require('url');
var serialPortLibrary = require("serialport");

// Creates an instance of a serial port.
var serialPortObject = serialPortLibrary.SerialPort
var serialPortInstance = new serialPortObject("COM3", {
  baudrate: 9600
});
var serialPortInstance2 = new serialPortObject("COM2", {
  baudrate: 9600
});
var serialPortInstance3 = new serialPortObject("COM1", {
  baudrate: 9600
});

// Some basic rules governing the serial port.
serialPortInstance.on("open", function () {
  // Print to console that the serial port is working
  console.log('SERIAL PORT ONE ONLINE!');
  // Prints anything the serial port receives.
  serialPortInstance.on('data', function(data) {
    console.log('data received: ' + data);
  });
  serialPortInstance.write("ls\n", function(err, results) {
	if (err) {
		console.log('err ' + err);
		console.log('results ' + results);
	}
  });
});
serialPortInstance2.on("open", function () {
  // Print to console that the serial port is working
  console.log('SERIAL PORT TWO ONLINE!');
  // Prints anything the serial port receives.
  serialPortInstance2.on('data', function(data) {
    console.log('data received: ' + data);
  });
  serialPortInstance2.write("ls\n", function(err, results) {
	if (err) {
		console.log('err ' + err);
		console.log('results ' + results);
	}
  });
});
serialPortInstance3.on("open", function () {
  // Print to console that the serial port is working
  console.log('SERIAL PORT THREE ONLINE!');
  // Prints anything the serial port receives.
  serialPortInstance3.on('data', function(data) {
    console.log('data received: ' + data);
  });
  serialPortInstance3.write("ls\n", function(err, results) {
	if (err) {
		console.log('err ' + err);
		console.log('results ' + results);
	}
  });
});

// Creates a local server.
var server = http.createServer(function(req, res) {
	// Whenever http://localhost:8080/pathname is visited on this computer, pathname is written to the serial port. Pathname should be set to ten
	// times the animal's speed in miles per hour. (Our serial communication only takes integers, so this is how the system works 
	// with speeds such as 0.5 or 27.4 mph.)
	var pathname = url.parse(req.url).pathname;
	serialPortInstance.write(pathname, function(err, results) {
				console.log(pathname);
				if (err) {
					console.log('err ' + err);
					console.log('results ' + results);
				} else {
					
				}
			});
	serialPortInstance2.write(pathname, function(err, results) {
				console.log(pathname);
				if (err) {
					console.log('err ' + err);
					console.log('results ' + results);
				} else {
					
				}
			});
	serialPortInstance3.write(pathname, function(err, results) {
				console.log(pathname);
				if (err) {
					console.log('err ' + err);
					console.log('results ' + results);
				} else {
					
				}
			});			
});

// Listens to local server.
server.listen(8080);