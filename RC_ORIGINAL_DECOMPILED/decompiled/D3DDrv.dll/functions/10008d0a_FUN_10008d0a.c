/*
 * FUN_10008d0a at 10008d0a
 * undefined __cdecl FUN_10008d0a(int param_1, int * param_2)
 * Address ranges: 10008d0a-10008d33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10008d0a(int param_1,int *param_2)

{
  if ((param_1 != 0) && ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0)) {
    FUN_10008b74(param_2);
    *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) & 0xee;
    param_2[6] = 0;
    *param_2 = 0;
    param_2[2] = 0;
  }
  return;
}

