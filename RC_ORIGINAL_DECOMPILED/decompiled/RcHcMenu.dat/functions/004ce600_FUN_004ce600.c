/*
 * FUN_004ce600 at 004ce600
 * undefined __register FUN_004ce600(int * param_1, int * param_2, int * param_3)
 * Address ranges: 004ce600-004ce8dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ce600(int *param_1,int *param_2,int *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  char *pcStack_268;
  undefined4 uStack_254;
  undefined1 *puStack_250;
  undefined1 *puStack_24c;
  undefined4 *local_244;
  int local_240;
  undefined4 *local_23c;
  int local_238;
  int local_234;
  byte local_230 [256];
  int local_130;
  byte local_12c [256];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_24c = &stack0xfffffffc;
  local_244 = (undefined4 *)0x0;
  local_23c = (undefined4 *)0x0;
  local_240 = 0;
  local_234 = 0;
  local_238 = 0;
  local_28 = 0;
  local_2c = 0;
  local_130 = 0;
  local_24 = 0;
  local_1c = 0;
  puStack_250 = &LAB_004ce8dd;
  uStack_254 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_254;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (int *)0x0) {
    FUN_00403d94("Assertion failure");
    param_3 = extraout_ECX;
    puVar1 = puStack_24c;
  }
  puStack_24c = puVar1;
  FUN_004ce42c(local_c,&local_24,param_3,(int)&stack0xfffffffc);
  FUN_00403e48(&local_1c,local_24);
  local_14 = (undefined4 *)FUN_00491be8(local_c);
  iVar2 = FUN_0045ba40((int)local_14);
  if (iVar2 < 1) {
    FUN_00402fe0(*local_8,local_12c);
    FUN_00403fd4(&local_2c,local_12c);
    FUN_00402fe0(*local_c,local_230);
    FUN_00403fd4(&local_130,local_230);
    pcStack_268 = " must contain descs";
    FUN_004040f0(&local_28,5);
    FUN_00403d94(local_28);
  }
  FUN_00403db0(local_10);
  iVar2 = FUN_0045ba40((int)local_14);
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_20 = uVar3 + 1;
    local_18 = 0;
    do {
      piVar4 = (int *)(**(code **)*local_14)(local_14,local_18);
      iVar2 = FUN_00402fdc(local_c);
      uVar5 = FUN_0040320c(piVar4,iVar2);
      if ((char)uVar5 == '\0') {
        FUN_00402fe0(*local_8,local_12c);
        FUN_00403fd4(&local_238,local_12c);
        FUN_004040f0(&local_234,5);
        FUN_00403d94(local_234);
      }
      if (0 < local_18) {
        FUN_00404038(local_10,(undefined4 *)&DAT_004ce9ec);
        FUN_00404038(local_10,(undefined4 *)" UNION");
        FUN_00404038(local_10,(undefined4 *)&DAT_004ce9ec);
      }
      piVar4 = (int *)(**(code **)*local_14)(local_14,local_18,(undefined4 *)*local_14," SELECT \'")
      ;
      FUN_00402fe0(*piVar4,local_12c);
      FUN_00403fd4(&local_240,local_12c);
      pcVar8 = "\' as ";
      pcVar7 = "Discriminator";
      puVar6 = &DAT_004cea44;
      iVar2 = local_1c;
      iVar9 = local_240;
      FUN_004040f0((int *)&local_23c,6);
      FUN_00404038(local_10,local_23c);
      piVar4 = (int *)(**(code **)*local_14)
                                (local_14,local_18,(undefined4 *)*local_14,iVar2,puVar6,pcVar7,
                                 pcVar8,iVar9);
      iVar2 = FUN_00403224(piVar4,(int)&PTR_FUN_0048e794);
      FUN_0040407c((int *)&local_244,(undefined4 *)" FROM   ",*(undefined4 **)(iVar2 + 0x3c));
      FUN_00404038(local_10,local_244);
      local_18 = local_18 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  *in_FS_OFFSET = pcStack_268;
  FUN_00403dd4((int *)&local_244,5);
  FUN_00403db0(&local_130);
  FUN_00403dd4(&local_2c,3);
  FUN_00403db0(&local_1c);
  return;
}

