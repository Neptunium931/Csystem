# use the TAP log driver
TEST_LOG_DRIVER = env AM_TAP_AWK='$(AWK)' $(SHELL) \
									$(top_srcdir)/build-aux/tap-driver.sh

# Setup Criterion TAP output using ENV
# AM_TESTS_ENVIRONMENT = \
	#   CRITERION_OUTPUTS='tap:-'; \
	#   export CRITERION_OUTPUTS;

check_PROGRAMS = criterion_tests_client criterion_tests_server

criterion_tests_client_SOURCES = tests/client.c \
																 ./src/protopeach.c \
																 ./src/protopeach.h
criterion_tests_client_CFLAGS =  $(CRITERION_CFLAGS)
criterion_tests_client_LDFLAGS =  $(CRITERION_LIBS)

criterion_tests_server_SOURCES = tests/server.c \
																 ./tests/fff.h \
																 ./src/server/socket.c \
																 ./src/server/socket.h \
																 ./src/protopeach.c \
																 ./src/protopeach.h \
																 ./src/findFruit.c \
																 ./src/findFruit.h \
																 ./src/matchString.c \
																 ./src/matchString.h \
																 ./src/server/responce.c \
																 ./src/server/responce.h \
																 ./src/server/init.h \
																 ./src/server/init.c \
																 ./src/server/sendFuitProcess.c \
																 ./src/server/sendFuitProcess.h

criterion_tests_server_CFLAGS =  $(CRITERION_CFLAGS)
criterion_tests_server_LDFLAGS =  $(CRITERION_LIBS)

TESTS = criterion_tests_client criterion_tests_server tests/integrationTests.py

EXTRA_DIST = autogen.sh \
						 ./tests/integrationTests.py \
						 ./tests/integrationTests.yaml
ACLOCAL_AMFLAGS = -I m4 ${ACLOCAL_FLAGS}
AM_MAKEFLAGS = --no-print-directory

AM_CPPFLAGS = \
							-include $(top_builddir)/config.h \
							-I${top_srcdir}/src

AM_CFLAGS = $(WARN_CFLAGS)
AM_LDFLAGS = $(WARN_LDFLAGS)

bin_PROGRAMS = CnetworkingClient CnetworkingServer

CnetworkingClient_SOURCES = ./src/protopeach.c \
														./src/protopeach.h \
														./src/client/client.c \
														./src/client/client.h \
														./src/matchString.c \
														./src/matchString.h \
														./src/strip.c \
														./src/strip.h \
														./src/client/socket.c \
														./src/client/socket.h \
														./src/client/help.c \
														./src/client/help.h \
														./src/client/matchIpv4.c \
														./src/client/matchIpv4.h 

CnetworkingClient_LDADD = $(READLINE_LIBS) $(PCRE_LIBS)

CnetworkingServer_SOURCES = ./src/protopeach.c \
														./src/server/socket.c \
														./src/server/socket.h \
														./src/protopeach.h \
														./src/server/server.c \
														./src/server/server.h \
														./src/findFruit.c \
														./src/findFruit.h \
														./src/matchString.c \
														./src/matchString.h \
														./src/server/responce.c \
														./src/server/responce.h \
														./src/server/init.h \
														./src/server/init.c \
														./src/server/sendFuitProcess.c \
														./src/server/sendFuitProcess.h \
														./src/server/recvFruitProcess.c \
														./src/server/recvFruitProcess.h \
														./src/server/changeFruitProcess.c \
														./src/server/changeFruitProcess.h \
														./src/clear.c \
														./src/clear.h \
														./src/server/howmanyProcess.c \
														./src/server/howmanyProcess.h \
														./src/server/matchDomain.c \
														./src/server/matchDomain.h \
														./src/server/mainProcess.c \
														./src/server/mainProcess.h \
														./src/server/state.h

CnetworkingServer_LDADD = $(PCRE_LIBS) $(PTHREAD_LIBS)
