/*
 * FUN_00596480 at 00596480
 * undefined FUN_00596480(void)
 * Address ranges: 00596480-0059650e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00596480(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_14 [4];
  char local_10;
  char local_4;
  
  uVar2 = DAT_006a23cc;
  uVar1 = DAT_006a23c8;
  uVar4 = DAT_006a23c4;
  uVar3 = DAT_006a23c0;
  FUN_00595d30(local_14);
  if (local_4 == '\0') {
    uVar1 = DAT_006a2388;
    uVar2 = DAT_006a238c;
    uVar3 = DAT_006a2380;
    uVar4 = DAT_006a2384;
  }
  if (local_10 == '\0') {
    uVar1 = DAT_006a2378;
    uVar2 = DAT_006a237c;
    uVar3 = DAT_006a2370;
    uVar4 = DAT_006a2374;
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  FUN_005630e0();
  return param_1;
}

