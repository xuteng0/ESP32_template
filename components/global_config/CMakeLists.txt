# Set source files
set(GLOBAL_CONFIG_SOURCES 
    "src/i2c_master.c"
)

# Set public include directories
set(GLOBAL_CONFIG_PUBLIC_INCLUDE_DIRS "inc")

# Set private include directories
set(GLOBAL_CONFIG_PRIVATE_INCLUDE_DIRS "private_inc")

# Set required components
set(GLOBAL_CONFIG_REQUIRES 
    driver
)

# Register the component
idf_component_register(
    SRCS ${GLOBAL_CONFIG_SOURCES}
    INCLUDE_DIRS ${GLOBAL_CONFIG_PUBLIC_INCLUDE_DIRS}
    PRIV_INCLUDE_DIRS ${GLOBAL_CONFIG_PRIVATE_INCLUDE_DIRS}
    REQUIRES ${GLOBAL_CONFIG_REQUIRES}
)