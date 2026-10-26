/*
 * FUN_00550630 at 00550630
 * undefined __register FUN_00550630(int * param_1, char param_2)
 * Address ranges: 00550630-005507d3;005507e7-005507fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00550630(int *param_1,char param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_178;
  undefined1 *puStackY_174;
  undefined1 *puStackY_170;
  undefined4 uStackY_16c;
  undefined1 *puStackY_168;
  undefined4 *puStackY_164;
  char *pcStackY_160;
  undefined *puStackY_15c;
  int iStackY_158;
  undefined4 uStackY_154;
  undefined1 *puStackY_150;
  undefined1 *puStackY_14c;
  undefined4 in_stack_fffffeb8;
  undefined4 in_stack_fffffebc;
  undefined4 *local_134;
  byte *local_130;
  int local_12c;
  byte local_128 [256];
  int local_28;
  undefined4 *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  undefined4 local_10;
  undefined1 local_9;
  int *local_8;
  
  local_134 = (undefined4 *)0x0;
  local_130 = (byte *)0x0;
  local_12c = 0;
  local_24 = (undefined4 *)0x0;
  local_28 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_14c = (undefined1 *)0x550660;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,0,in_stack_fffffeb8,in_stack_fffffebc);
    local_9 = extraout_DL;
  }
  puStackY_150 = &LAB_00550839;
  uStackY_154 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_154;
  iStackY_158 = 0x550684;
  puStackY_14c = &stack0xfffffffc;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_128);
  iStackY_158 = 0x550692;
  FUN_00403fd4(&local_28,local_128);
  iStackY_158 = local_28;
  puStackY_15c = &DAT_00550868;
  pcStackY_160 = "Create";
  puStackY_164 = (undefined4 *)0x5506ac;
  FUN_004040f0((int *)&local_24,3);
  puStackY_164 = local_24;
  puStackY_168 = (undefined1 *)0x5506b5;
  uVar2 = FUN_004a418c();
  puVar1 = puStackY_164;
  puStackY_164 = (undefined4 *)0x5506c1;
  FUN_004a48b8(uVar2,puVar1,0);
  puStackY_164 = (undefined4 *)0x5506cb;
  FUN_00403064(local_8,'\0',extraout_ECX);
  puStackY_164 = (undefined4 *)0x5506d3;
  local_14 = (int *)FUN_00550978(local_8);
  puStackY_164 = (undefined4 *)0x5506e4;
  piVar3 = FUN_0045b810((int *)&LAB_0045b7d8,'\x01',0);
  local_8[1] = (int)piVar3;
  puStackY_168 = &LAB_005507fd;
  uStackY_16c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_16c;
  puStackY_170 = (undefined1 *)0x550700;
  puStackY_164 = (undefined4 *)&stack0xfffffffc;
  iVar4 = (**(code **)(*local_14 + 0x14))();
  uVar2 = iVar4 - 1;
  uVar5 = extraout_ECX_00;
  if (SBORROW4(iVar4,1)) {
    puStackY_170 = (undefined1 *)0x55070a;
    uVar2 = thunk_FUN_00402874(uVar2);
    uVar5 = extraout_ECX_01;
  }
  if (-1 < (int)uVar2) {
    local_20 = uVar2 + 1;
    local_10 = 0;
    puStackY_170 = (undefined1 *)0x550729;
    local_1c = (int *)FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',uVar5);
    puStackY_174 = &LAB_005507d4;
    uStackY_178 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_178;
    puStackY_170 = &stack0xfffffffc;
    (**(code **)(*local_14 + 0xc))(local_14,local_10,&local_12c);
    FUN_00550afc(local_8,local_12c,local_1c);
    local_18 = FUN_00403064((int *)&DAT_005505b8,'\x01',extraout_ECX_02);
    (**(code **)(*local_1c + 0xc))(local_1c,1,&local_130);
    uVar5 = FUN_00409c44(local_130);
    *(undefined4 *)(local_18 + 4) = uVar5;
    (**(code **)(*local_1c + 0xc))(local_1c,0,&local_134);
    FUN_00403e04((int *)(local_18 + 8),local_134);
    (**(code **)(*(int *)local_8[1] + 0xc))((int *)local_8[1],local_18);
    *in_FS_OFFSET = uStackY_178;
    puStackY_170 = &DAT_005507db;
    puStackY_174 = (undefined1 *)0x5507d3;
    FUN_0040e4b4(&local_1c);
    return;
  }
  *in_FS_OFFSET = uStackY_16c;
  puStackY_164 = (undefined4 *)&LAB_00550804;
  puStackY_168 = (undefined1 *)0x5507fc;
  FUN_00403094(local_14);
  return;
}

