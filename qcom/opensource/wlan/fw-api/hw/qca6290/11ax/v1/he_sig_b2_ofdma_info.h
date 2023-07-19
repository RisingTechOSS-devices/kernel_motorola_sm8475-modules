/*
 * Copyright (c) 2016-2017 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _HE_SIG_B2_OFDMA_INFO_H_
#define _HE_SIG_B2_OFDMA_INFO_H_
#if !defined(__ASSEMBLER__)
#endif


// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	sta_id[10:0], nsts[13:11], txbf[14], sta_mcs[18:15], sta_dcm[19], sta_coding[20], reserved_0[31:21]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_HE_SIG_B2_OFDMA_INFO 1

struct he_sig_b2_ofdma_info {
             uint32_t sta_id                          : 11, //[10:0]
                      nsts                            :  3, //[13:11]
                      txbf                            :  1, //[14]
                      sta_mcs                         :  4, //[18:15]
                      sta_dcm                         :  1, //[19]
                      sta_coding                      :  1, //[20]
                      reserved_0                      : 11; //[31:21]
};

/*

sta_id
			
			Identifies the STA that is addressed. Details of STA ID
			are TBD

nsts
			
			MAC RX side usage only:
			
			
			
			Number of spatial streams for this user
			
			
			
			<enum 0 1_spatial_stream>Single spatial stream
			
			<enum 1 2_spatial_streams>2 spatial streams
			
			<enum 2 3_spatial_streams>3 spatial streams
			
			<enum 3 4_spatial_streams>4 spatial streams
			
			<enum 4 5_spatial_streams>5 spatial streams
			
			<enum 5 6_spatial_streams>6 spatial streams
			
			<enum 6 7_spatial_streams>7 spatial streams
			
			<enum 7 8_spatial_streams>8 spatial streams

txbf
			
			Indicates whether beamforming is applied
			
			0: No beamforming
			
			1: beamforming
			
			<legal all>

sta_mcs
			
			Indicates the data MCS

sta_dcm
			
			
			0: No DCM
			
			1:DCM
			
			<legal all>

sta_coding
			
			Distinguishes between BCC/LDPC
			
			
			
			0: BCC
			
			1: LDPC
			
			<legal all>

reserved_0
			
			<legal 0>
*/


/* Description		HE_SIG_B2_OFDMA_INFO_0_STA_ID
			
			Identifies the STA that is addressed. Details of STA ID
			are TBD
*/
#define HE_SIG_B2_OFDMA_INFO_0_STA_ID_OFFSET                         0x00000000
#define HE_SIG_B2_OFDMA_INFO_0_STA_ID_LSB                            0
#define HE_SIG_B2_OFDMA_INFO_0_STA_ID_MASK                           0x000007ff

/* Description		HE_SIG_B2_OFDMA_INFO_0_NSTS
			
			MAC RX side usage only:
			
			
			
			Number of spatial streams for this user
			
			
			
			<enum 0 1_spatial_stream>Single spatial stream
			
			<enum 1 2_spatial_streams>2 spatial streams
			
			<enum 2 3_spatial_streams>3 spatial streams
			
			<enum 3 4_spatial_streams>4 spatial streams
			
			<enum 4 5_spatial_streams>5 spatial streams
			
			<enum 5 6_spatial_streams>6 spatial streams
			
			<enum 6 7_spatial_streams>7 spatial streams
			
			<enum 7 8_spatial_streams>8 spatial streams
*/
#define HE_SIG_B2_OFDMA_INFO_0_NSTS_OFFSET                           0x00000000
#define HE_SIG_B2_OFDMA_INFO_0_NSTS_LSB                              11
#define HE_SIG_B2_OFDMA_INFO_0_NSTS_MASK                             0x00003800

/* Description		HE_SIG_B2_OFDMA_INFO_0_TXBF
			
			Indicates whether beamforming is applied
			
			0: No beamforming
			
			1: beamforming
			
			<legal all>
*/
#define HE_SIG_B2_OFDMA_INFO_0_TXBF_OFFSET                           0x00000000
#define HE_SIG_B2_OFDMA_INFO_0_TXBF_LSB                              14
#define HE_SIG_B2_OFDMA_INFO_0_TXBF_MASK                             0x00004000

/* Description		HE_SIG_B2_OFDMA_INFO_0_STA_MCS
			
			Indicates the data MCS
*/
#define HE_SIG_B2_OFDMA_INFO_0_STA_MCS_OFFSET                        0x00000000
#define HE_SIG_B2_OFDMA_INFO_0_STA_MCS_LSB                           15
#define HE_SIG_B2_OFDMA_INFO_0_STA_MCS_MASK                          0x00078000

/* Description		HE_SIG_B2_OFDMA_INFO_0_STA_DCM
			
			
			0: No DCM
			
			1:DCM
			
			<legal all>
*/
#define HE_SIG_B2_OFDMA_INFO_0_STA_DCM_OFFSET                        0x00000000
#define HE_SIG_B2_OFDMA_INFO_0_STA_DCM_LSB                           19
#define HE_SIG_B2_OFDMA_INFO_0_STA_DCM_MASK                          0x00080000

/* Description		HE_SIG_B2_OFDMA_INFO_0_STA_CODING
			
			Distinguishes between BCC/LDPC
			
			
			
			0: BCC
			
			1: LDPC
			
			<legal all>
*/
#define HE_SIG_B2_OFDMA_INFO_0_STA_CODING_OFFSET                     0x00000000
#define HE_SIG_B2_OFDMA_INFO_0_STA_CODING_LSB                        20
#define HE_SIG_B2_OFDMA_INFO_0_STA_CODING_MASK                       0x00100000

/* Description		HE_SIG_B2_OFDMA_INFO_0_RESERVED_0
			
			<legal 0>
*/
#define HE_SIG_B2_OFDMA_INFO_0_RESERVED_0_OFFSET                     0x00000000
#define HE_SIG_B2_OFDMA_INFO_0_RESERVED_0_LSB                        21
#define HE_SIG_B2_OFDMA_INFO_0_RESERVED_0_MASK                       0xffe00000


#endif // _HE_SIG_B2_OFDMA_INFO_H_