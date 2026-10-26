/*
 * FUN_10001890 at 10001890
 * undefined4 __fastcall FUN_10001890(undefined * param_1, undefined4 param_2)
 * Address ranges: 10001890-100018ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10001890(undefined *param_1,undefined4 param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)&DAT_1000e198;
  do {
    iVar1 = (*(code *)param_1)(ppuVar2,param_2);
    if (iVar1 == 0) {
      return 1;
    }
    ppuVar2 = ppuVar2 + 2;
  } while (ppuVar2 < &PTR_s_Glide_driver__v100_3__Copyright_1_1000e1d8);
  return 1;
}

