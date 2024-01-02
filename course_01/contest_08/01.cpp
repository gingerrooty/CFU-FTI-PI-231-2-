class Hack {
public:
    int hack_trash, hack_secret;
};

int hack_it(Keeper keeper) {
    return ((Hack*)(&keeper))->hack_secret;
};