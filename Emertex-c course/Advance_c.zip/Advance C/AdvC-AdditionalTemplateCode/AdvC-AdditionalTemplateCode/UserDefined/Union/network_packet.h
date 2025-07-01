struct data_packet
{
    /* Fields for data pkt*/
};

struct error_packet
{
    /* Fields for error pkt*/
};

struct ack_packet
{
    /* Fields for acknowledgment pkt*/
};

union any_packet
{
    struct data_packet d_pkt;
    struct error_packet e_pkt;
    struct ack_packet a_pkt;
};

struct packet
{
    int pkt_type; // Say 1, 2, 3 for data, error and ack pkt respectively

    union any_packet a_pkt;
};
