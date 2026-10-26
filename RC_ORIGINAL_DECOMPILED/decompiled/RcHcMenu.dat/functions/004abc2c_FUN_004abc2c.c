/*
 * FUN_004abc2c at 004abc2c
 * undefined __register FUN_004abc2c(int * param_1, int * param_2, int * param_3, undefined4 * param_4, char param_5, char param_6)
 * Address ranges: 004abc2c-004abeb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004abc2c(int *param_1,int *param_2,int *param_3,undefined4 *param_4,char param_5,
                 char param_6)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint *in_FS_OFFSET;
  RECT *pRVar7;
  undefined4 uVar8;
  RECT local_5c;
  int local_4c [4];
  int local_3c [4];
  int *local_2c;
  int *local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_1c = *param_4;
  local_18 = param_4[1];
  local_10 = *param_2;
  local_c = param_2[1];
  local_14 = param_3;
  local_8 = param_1;
  if (param_3 == (int *)0x0) {
    FUN_00403d94("DaviDrawGlyph: aGlyph not assigned.");
  }
  cVar1 = (**(code **)(*local_14 + 0x28))();
  if (cVar1 == '\0') {
    FUN_00403d94("DaviDrawGlyph: aGlyph must be transparent.");
  }
  local_20 = (**(code **)(*local_14 + 0x2c))();
  local_24 = (**(code **)(*local_14 + 0x20))();
  if (param_5 != '\0') {
    uVar2 = local_20 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    if (uVar2 != 0) {
      FUN_00403d94("DaviDrawGlyph: aGlyph does not have a correct size.");
    }
    uVar2 = local_20 & 1;
    local_20 = (int)local_20 >> 1;
    if ((int)local_20 < 0) {
      local_20 = local_20 + (uVar2 != 0);
    }
  }
  FUN_00411624(0,0,local_20,local_3c,local_24);
  piVar5 = local_4c;
  iVar6 = (int)((longlong)(int)local_20 * 2);
  uVar8 = local_24;
  if ((longlong)iVar6 != (longlong)(int)local_20 * 2) {
    thunk_FUN_00402874((uint)piVar5);
    iVar6 = extraout_ECX;
  }
  FUN_00411624(local_20,0,iVar6,piVar5,uVar8);
  local_28 = (int *)0x0;
  local_2c = (int *)0x0;
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&stack0xffffff90;
  local_28 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_00);
  (**(code **)(*local_28 + 0x40))(local_28,local_20);
  (**(code **)(*local_28 + 0x34))(local_28,local_24);
  if (param_6 == '\0') {
    piVar5 = local_3c;
    piVar3 = (int *)FUN_00421490(local_14);
    piVar4 = (int *)FUN_00421490(local_28);
    FUN_0041c848(piVar4,local_3c,piVar3,piVar5);
  }
  else {
    if (param_5 == '\0') {
      local_2c = (int *)FUN_004ab9a4(local_14);
    }
    else {
      local_2c = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_01);
      if ((longlong)(int)((longlong)(int)local_20 * 2) != (longlong)(int)local_20 * 2) {
        thunk_FUN_00402874((uint)local_2c);
      }
      (**(code **)(*local_2c + 0x40))();
      (**(code **)(*local_2c + 0x34))(local_2c,local_24);
      (**(code **)(*local_2c + 8))(local_2c,local_14);
      piVar5 = local_4c;
      piVar3 = (int *)FUN_00421490(local_2c);
      piVar4 = (int *)FUN_00421490(local_2c);
      FUN_0041c848(piVar4,local_3c,piVar3,piVar5);
      (**(code **)(*local_2c + 0x40))(local_2c,local_20);
    }
    uVar2 = FUN_00421574(local_2c);
    iVar6 = FUN_00421490(local_28);
    FUN_0041c318(*(int **)(iVar6 + 0x14),uVar2);
    FUN_00411624(0,0,local_20,&local_5c.left,local_24);
    pRVar7 = &local_5c;
    piVar5 = (int *)FUN_00421490(local_28);
    FUN_0041c9f8(piVar5,pRVar7);
    iVar6 = FUN_00421490(local_28);
    FUN_0041c318(*(int **)(iVar6 + 0x14),local_18);
    piVar5 = local_3c;
    uVar2 = 0xffffff;
    piVar3 = (int *)FUN_00421490(local_28);
    FUN_0041c588(piVar3,local_3c,local_2c,uVar2,piVar5);
    iVar6 = FUN_00421490(local_28);
    FUN_0041c318(*(int **)(iVar6 + 0x14),local_1c);
    uVar2 = 0x808080;
    piVar5 = (int *)FUN_00421490(local_28);
    FUN_0041c588(piVar5,local_3c,local_2c,uVar2,local_3c);
  }
  (**(code **)(*local_28 + 0x3c))(local_28,1);
  FUN_0041c8d0(local_8,local_10,local_c,local_28);
  *in_FS_OFFSET = uVar2;
  FUN_00403094(local_28);
  FUN_00403094(local_2c);
  return;
}

