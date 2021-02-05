# NTRIPConfigEditor
Utility for configuring NTRIP data collectors

NTRIP is a standard for receiving CORS GPS correction data via a network connection. In this case, the network was being accessed
via a cellular modem attached to the GPS device. This code was written to provide a simple interface for modifying the configuration
files needed to establish the connection.

## Classes
 - EditMainWindow: Provides a Qt frame that holds the input and output fields needed to edit a configuration.
 - Main: Creates the instance of EditMainWindow and starts it running.
