if (isServer) then {
	[] spawn NSA_fnc_pb_server;
};

if !(isDedicated) then {
	[] spawn NSA_fnc_pb_client;
};