/*
 * FUN_0054a53c at 0054a53c
 * undefined __register FUN_0054a53c(int * param_1, undefined4 * param_2)
 * Address ranges: 0054a53c-0054a6b7;0054a6c6-0054a74c;0054a754-0054a785
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054a53c(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_194;
  undefined1 *puStack_190;
  undefined1 *puStack_18c;
  undefined4 uStack_180;
  undefined1 *puStack_17c;
  undefined1 *puStack_178;
  char *pcStack_174;
  char *pcStack_170;
  undefined1 *puStack_16c;
  undefined4 uStack_168;
  undefined1 *puStack_164;
  undefined1 *puStack_160;
  int local_150;
  byte local_14c [256];
  int local_4c;
  int local_48;
  byte local_44 [31];
  char local_25;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  bool local_d;
  undefined4 *local_c;
  int *local_8;
  
  puStack_160 = &stack0xfffffffc;
  local_150 = 0;
  local_48 = 0;
  local_4c = 0;
  local_18 = 0;
  puStack_164 = &LAB_0054a786;
  uStack_168 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_168;
  puStack_16c = (undefined1 *)0x54a580;
  local_c = param_2;
  local_8 = param_1;
  FUN_0048f02c(*(int **)(param_1[0xf] + 0x18),0,(undefined4 *)local_44);
  puStack_16c = (undefined1 *)0x54a58e;
  piVar2 = (int *)FUN_00492440((int *)local_8[7],local_44);
  puStack_16c = (undefined1 *)0x54a599;
  uVar3 = FUN_0040320c(piVar2,(int)&PTR_FUN_00489774);
  if ((char)uVar3 == '\0') {
    puStack_16c = (undefined1 *)0x54a5ad;
    FUN_00402fe0(*local_8,local_14c);
    puStack_16c = (undefined1 *)0x54a5bb;
    FUN_00403fd4(&local_4c,local_14c);
    puStack_16c = (undefined1 *)local_4c;
    pcStack_170 = ".GotoTextFromBeginning: ";
    pcStack_174 = "Cannot GotoText because the first appProp of the sortorder is not a stringprop.";
    puStack_178 = (undefined1 *)0x54a5d5;
    FUN_004040f0(&local_48,3);
    puStack_178 = (undefined1 *)0x54a5e7;
    FUN_00403d94(local_48);
  }
  puStack_178 = (undefined1 *)0x54a5ef;
  iVar4 = FUN_00404030((int)local_c);
  if (0 < iVar4) {
    puStack_178 = (undefined1 *)0x54a5fe;
    cVar1 = (**(code **)*local_8)();
    if (cVar1 != '\0') {
      puStack_178 = (undefined1 *)0x54a611;
      local_14 = (int *)FUN_0049206c((int *)local_8[7]);
      puStack_17c = &LAB_0054a74d;
      uStack_180 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_180;
      puStack_178 = &stack0xfffffffc;
      local_24 = FUN_00493e2c(local_14,local_44);
      if (local_24 == 0) {
        FUN_00403d94("Assertion failure");
      }
      puStack_18c = (undefined1 *)0x54a65f;
      FUN_00494e38(local_14,local_44,'\x01',&local_20,&local_24);
      if (local_20 == (int *)0x0) {
        puStack_18c = (undefined1 *)0x54a679;
        FUN_00403d94("Assertion failure");
      }
      puStack_190 = &LAB_0054a6b8;
      uStack_194 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_194;
      local_25 = '\0';
      piVar2 = &local_150;
      puStack_18c = &stack0xfffffffc;
      FUN_0054a4a8((int)local_8,local_c,local_44,piVar2);
      (**(code **)(*local_20 + 0x38))(local_20,local_150);
      *in_FS_OFFSET = piVar2;
      if (local_25 == '\0') {
        puStack_190 = (undefined1 *)0x54a6df;
        FUN_00548cf4(local_8,local_14,1);
        puStack_190 = (undefined1 *)0x54a6ea;
        FUN_0054a2f8(local_8,(int)local_14);
        puStack_190 = (undefined1 *)0x54a6f5;
        piVar2 = (int *)FUN_00494c5c(local_14,local_44);
        puStack_190 = (undefined1 *)0x54a6fa;
        uVar3 = FUN_00496b30(piVar2);
        if ((char)uVar3 == '\0') {
          puStack_190 = (undefined1 *)0x54a71b;
          FUN_00403db0(&local_18);
        }
        else {
          puStack_190 = (undefined1 *)0x54a709;
          piVar2 = (int *)FUN_00494c5c(local_14,local_44);
          puStack_190 = (undefined1 *)0x54a711;
          FUN_004966b4(piVar2,&local_18);
        }
        puStack_190 = (undefined1 *)0x54a72c;
        local_1c = FUN_0045a780(local_18,(int)local_c,2);
        local_d = local_1c == 0;
      }
      else {
        local_d = false;
      }
      *in_FS_OFFSET = puStack_18c;
      FUN_00403094(local_14);
      return;
    }
  }
  local_d = false;
  *in_FS_OFFSET = pcStack_174;
  puStack_16c = &LAB_0054a78d;
  pcStack_170 = (char *)0x54a770;
  FUN_00403db0(&local_150);
  pcStack_170 = (char *)0x54a77d;
  FUN_00403dd4(&local_4c,2);
  pcStack_170 = (char *)0x54a785;
  FUN_00403db0(&local_18);
  return;
}

