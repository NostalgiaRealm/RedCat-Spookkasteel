/*
 * FUN_00512884 at 00512884
 * undefined __register FUN_00512884(int * param_1, int * param_2)
 * Address ranges: 00512884-005129ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00512884(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *in_FS_OFFSET;
  char *pcStack_13c;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  uint *local_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_118 = (uint *)0x0;
  local_10 = 0;
  local_14 = 0;
  puStack_120 = &LAB_005129ef;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 != (int *)0x0) {
    uVar3 = FUN_0040320c(param_2,(int)&PTR_FUN_004e824c);
    puVar1 = puStack_11c;
    if ((char)uVar3 == '\0') {
      FUN_00402fe0(*local_8,local_114);
      FUN_00403fd4(&local_14,local_114);
      pcStack_13c = "Must be an currency appProp.";
      FUN_004040f0(&local_10,6);
      FUN_00403d94(local_10);
      puVar1 = puStack_11c;
    }
  }
  puStack_11c = puVar1;
  if (local_c == (int *)0x0) {
    FUN_004fec0c(local_8,'\0');
  }
  else {
    if (local_c != (int *)0x0) {
      iVar4 = FUN_004e8e88((int)local_c);
      FUN_00510eec(local_8,iVar4);
      cVar2 = FUN_004e8ee8((int)local_c);
      FUN_0051102c(local_8,cVar2,extraout_ECX);
      cVar2 = FUN_004e8f48((int)local_c);
      FUN_00511060(local_8,cVar2,extraout_ECX_00);
      FUN_004e8fa8((int)local_c,(int *)&local_118);
      FUN_00511094(local_8,local_118);
      cVar2 = FUN_004e9010((int)local_c);
      FUN_00511104(local_8,cVar2,extraout_ECX_01);
    }
    iVar4 = FUN_00496d84((int)local_c);
    FUN_004fec0c(local_8,(*(byte *)(iVar4 + 0x18) & 0x20) != 0);
  }
  FUN_004f1924((undefined4 *)local_8[0xa4],(int)local_c);
  *in_FS_OFFSET = pcStack_13c;
  FUN_00403db0((int *)&local_118);
  FUN_00403dd4(&local_14,2);
  return;
}

