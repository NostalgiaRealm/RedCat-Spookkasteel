/*
 * FUN_10004c50 at 10004c50
 * undefined __cdecl FUN_10004c50(undefined * param_1, undefined4 param_2)
 * Address ranges: 10004c50-10004cb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10004c50(undefined *param_1,undefined4 param_2)

{
  undefined4 *local_8;
  
  if ((DAT_1002fce0 & 1) != 0) {
    FUN_100073f0(9);
    for (local_8 = DAT_1003143c; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)*local_8) {
      if ((local_8[5] & 0xffff) == 4) {
        (*(code *)param_1)(local_8 + 8,param_2);
      }
    }
    FUN_10007490(9);
  }
  return;
}

