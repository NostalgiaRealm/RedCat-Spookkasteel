/*
 * FUN_00539138 at 00539138
 * undefined __register FUN_00539138(int * param_1, int param_2)
 * Address ranges: 00539138-0053924f;00539257-005392da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00539138(int *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int *in_FS_OFFSET;
  int iStackY_16c;
  undefined1 *puStackY_168;
  undefined1 *puStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  char *pcStack_14c;
  char *pcStack_148;
  int iStack_144;
  int iStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  byte local_130 [256];
  int local_30;
  int local_2c;
  char local_25;
  int local_24;
  char local_1d;
  int *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_138 = &stack0xfffffffc;
  local_2c = 0;
  local_30 = 0;
  local_1c = (int *)0x0;
  puStack_13c = &LAB_00539305;
  iStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_140;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_1[0xa4] == 0) {
    iStack_144 = 0x53917d;
    FUN_00402fe0(*param_1,local_130);
    iStack_144 = 0x53918b;
    FUN_00403fd4(&local_30,local_130);
    iStack_144 = local_30;
    pcStack_148 = ".CreateInlineEditor: ";
    pcStack_14c = "AppObjList not assigned.";
    puStack_150 = (undefined1 *)0x5391a5;
    FUN_004040f0(&local_2c,3);
    puStack_150 = (undefined1 *)0x5391b7;
    FUN_00403d94(local_2c);
    puVar1 = puStack_138;
  }
  puStack_138 = puVar1;
  puStack_150 = (undefined1 *)0x5391c5;
  piVar3 = (int *)FUN_00549b64(local_8[0xa4]);
  puStack_150 = (undefined1 *)0x5391ca;
  local_18 = (int *)FUN_0049206c(piVar3);
  puStack_154 = &LAB_005392db;
  puStack_158 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_158;
  piVar3 = &local_10;
  puStack_150 = &stack0xfffffffc;
  FUN_00494e38(local_18,(byte *)(local_c + 0x44),'\x01',piVar3,&local_14);
  local_1d = '\x01';
  local_25 = '\0';
  piVar4 = FUN_00406aa0((int *)&local_1c);
  cVar2 = FUN_00403128(local_18,(int *)&DAT_0053937c,piVar4);
  if (cVar2 != '\0') {
    puStackY_168 = &LAB_00539250;
    iStackY_16c = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStackY_16c;
    local_1d = 0;
    (**(code **)(*local_1c + 0xc))(local_1c,local_10,&local_24);
    *in_FS_OFFSET = (int)&local_25;
    puStackY_168 = (undefined1 *)0x539257;
    iStackY_16c = 0x53924f;
    FUN_00406aa0((int *)&local_1c);
    return;
  }
  if ((local_1d != '\0') || (local_25 == '\0')) {
    piVar4 = FUN_00536888(local_8[0xb5],local_18,extraout_ECX);
    local_24 = (**(code **)*piVar4)(piVar4,local_10);
  }
  if (((local_25 == '\x01') || (local_24 == 0)) || ((*(byte *)(local_14 + 0x19) & 8) != 0)) {
    *(undefined1 *)(local_c + 0x60) = 0;
    *(undefined4 *)(local_c + 100) = 0;
    *(undefined4 *)(local_c + 0x68) = 0;
  }
  else {
    *(undefined1 *)(local_c + 0x60) = 1;
    puStackY_168 = (undefined1 *)0x5392c5;
    FUN_0053938c(local_8,local_c,local_24,local_10);
  }
  *in_FS_OFFSET = (int)piVar3;
  puStack_158 = &LAB_005392e2;
  FUN_00403094(local_18);
  return;
}

