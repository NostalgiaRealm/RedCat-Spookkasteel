/*
 * FUN_00411870 at 00411870
 * undefined __register FUN_00411870(undefined * * param_1)
 * Address ranges: 00411870-00411940
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00411870(undefined **param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  int local_110;
  undefined1 local_10c;
  byte local_108 [256];
  int local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = 0;
  puStack_120 = &LAB_0041195e;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puStack_128 = (undefined1 *)0x41189a;
  piVar1 = (int *)FUN_00412824(DAT_00573624);
  puStack_12c = &LAB_00411941;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puStack_128 = &stack0xfffffffc;
  while( true ) {
    iVar3 = FUN_004123e0((int)piVar1,(int)param_1);
    if (iVar3 != -1) break;
    FUN_00402fe0((int)param_1,local_108);
    FUN_00403fd4(&local_8,local_108);
    iVar3 = FUN_004116d4(local_8);
    if (iVar3 != 0) {
      local_110 = local_8;
      local_10c = 0xb;
      uVar2 = FUN_0040cfe4((int)&DAT_00410394,'\x01',(undefined4 *)PTR_PTR_00572420,0,&local_110);
      FUN_0040382c(uVar2);
    }
    FUN_004121d8(piVar1,(int)param_1);
    if (param_1 == &PTR_FUN_0041088c) break;
    param_1 = (undefined **)FUN_0040301c((int)param_1);
  }
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_00411948;
  puStack_12c = (undefined1 *)0x411940;
  FUN_00412888(DAT_00573624);
  return;
}

