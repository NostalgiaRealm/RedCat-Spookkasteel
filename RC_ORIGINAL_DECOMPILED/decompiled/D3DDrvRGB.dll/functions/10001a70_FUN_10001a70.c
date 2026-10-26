/*
 * FUN_10001a70 at 10001a70
 * undefined __cdecl FUN_10001a70(undefined4 param_1, int param_2)
 * Address ranges: 10001a70-10001b04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10001a70(undefined4 param_1,int param_2)

{
  if (DAT_10019f90 != param_2) {
    DAT_10019f90 = param_2;
    if (param_2 != 0) {
      (**(code **)(*DAT_1001bcd0 + 0x94))(DAT_1001bcd0,param_1,0xc,1);
      (**(code **)(*DAT_1001bcd0 + 0x94))(DAT_1001bcd0,param_1,0xd,1);
      (**(code **)(*DAT_1001bcd0 + 0x94))(DAT_1001bcd0,param_1,0xe,1);
      return;
    }
    (**(code **)(*DAT_1001bcd0 + 0x94))(DAT_1001bcd0,param_1,0xc,3);
    (**(code **)(*DAT_1001bcd0 + 0x94))(DAT_1001bcd0,param_1,0xd,3);
    (**(code **)(*DAT_1001bcd0 + 0x94))(DAT_1001bcd0,param_1,0xe,3);
  }
  return;
}

