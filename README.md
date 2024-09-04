# IIP

**iip: A C++ Tool for Retrieving Internal IP Addresses**

**Purpose:**

IIP is an acronym for "Internal IP." It is a lightweight C++ command-line tool designed to efficiently retrieve internal IP addresses from a Linux system. It provides a straightforward and reliable method for obtaining this information. Though it's not verbose in output, it gets to the heart of the matter, and just gives you what you need.

This tool is quick and distills the output for you.<br>
It relies on the output of standard Linux command ```ip addr show``` to deliver the goods.

**Features:**

-  Concise: A minimal and focused tool for a specific task.
-  Efficient: Leverages the ip command for direct access to network configuration.
-  Reliable: Employs robust error handling to ensure accurate results.

Installation:

Clone the repository:

Bash

```bash
    git clone https://github.com/your_username/iip
```

Use code with caution.


Build the tool:

```bash

    cd iip
    g++ -o iip iip.cpp

```

Use code with caution.

Usage:

```bash

    ./iip
```

Alternatively, you can easily add this utility to your user path such as:

```
~/.local/bin/
```

Use code with caution.

**Output:**

The tool will output a list of internal IP addresses in the following format:

```192.168.1.100 10.0.0.200```

