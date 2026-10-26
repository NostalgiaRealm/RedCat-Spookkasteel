/*
 * FUN_10001a40 at 10001a40
 * undefined __cdecl FUN_10001a40(undefined4 param_1, int param_2)
 * Address ranges: 10001a40-10001ad4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10001a40(undefined4 param_1,int param_2)

{
  if (DAT_10016ad8 != param_2) {
    DAT_10016ad8 = param_2;
    if (param_2 != 0) {
      (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,param_1,0xc,1);
      (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,param_1,0xd,1);
      (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,param_1,0xe,1);
      return;
    }
    (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,param_1,0xc,3);
    (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,param_1,0xd,3);
    (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,param_1,0xe,3);
  }
  return;
}

