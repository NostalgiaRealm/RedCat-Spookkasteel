/*
 * FUN_100019c0 at 100019c0
 * undefined __cdecl FUN_100019c0(int param_1, int param_2)
 * Address ranges: 100019c0-10001a04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100019c0(int param_1,int param_2)

{
  if (param_1 != DAT_10013d74) {
    (**(code **)(*DAT_100274c8 + 0x58))(DAT_100274c8,0x13,param_1);
    DAT_10013d74 = param_1;
  }
  if (param_2 != DAT_10013d78) {
    (**(code **)(*DAT_100274c8 + 0x58))(DAT_100274c8,0x14,param_2);
    DAT_10013d78 = param_2;
  }
  return;
}

