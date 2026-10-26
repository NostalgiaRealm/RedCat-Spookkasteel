/*
 * FUN_100067c0 at 100067c0
 * undefined4 __cdecl FUN_100067c0(undefined4 * param_1, int param_2, int param_3, int param_4)
 * Address ranges: 100067c0-10006813
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_100067c0(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  if (255.0 <= (float)param_1[8]) {
    FUN_100066a0(&DAT_10028ad8,param_3,param_1,param_2,param_4);
    return 1;
  }
  FUN_100066a0(&DAT_10028ac8,param_3,param_1,param_2,param_4);
  return 1;
}

