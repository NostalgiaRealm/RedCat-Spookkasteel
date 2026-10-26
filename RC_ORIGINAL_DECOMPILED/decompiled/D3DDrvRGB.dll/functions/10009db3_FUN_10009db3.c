/*
 * FUN_10009db3 at 10009db3
 * undefined __cdecl FUN_10009db3(int param_1, int * param_2)
 * Address ranges: 10009db3-10009ddc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10009db3(int param_1,int *param_2)

{
  if ((param_1 != 0) && ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0)) {
    FUN_10009c1d(param_2);
    *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) & 0xee;
    param_2[6] = 0;
    *param_2 = 0;
    param_2[2] = 0;
  }
  return;
}

