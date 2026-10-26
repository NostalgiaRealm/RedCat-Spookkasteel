/*
 * FUN_004bf7d4 at 004bf7d4
 * undefined __register FUN_004bf7d4(int * param_1)
 * Address ranges: 004bf7d4-004bf9cd;004bfb08-004bfbac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 4 for TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 4 for
   TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004bf7d4(int *param_1)

{
  VARIANTARG *pVVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  ULONG UVar5;
  undefined4 uVar6;
  ULONG *in_FS_OFFSET;
  int local_1bc [7];
  int local_1a0;
  undefined4 local_19c;
  VARIANTARG local_198;
  undefined4 *local_188;
  VARIANTARG local_184;
  VARIANTARG local_174;
  byte local_164 [244];
  undefined4 uStackY_70;
  undefined4 uStackY_6c;
  VARIANTARG *pVStackY_68;
  VARIANTARG *in_stack_ffffff9c;
  undefined4 *in_stack_ffffffa0;
  VARIANTARG *pVVar7;
  undefined4 *in_stack_ffffffa8;
  char *in_stack_ffffffac;
  char *pcVar8;
  undefined1 local_50 [16];
  undefined4 *puVar9;
  undefined4 auStack_38 [3];
  undefined4 local_2c [3];
  LPCSTR local_14 [2];
  undefined4 *local_c;
  int *local_8;
  
  local_2c[2] = &stack0xfffffffc;
  auStack_38[2] = &stack0xfffffffc;
  local_14[0] = (LPCSTR)0x36;
  do {
    local_14[0] = local_14[0] + -1;
  } while (local_14[0] != (LPCSTR)0x0);
  LOCK();
  UNLOCK();
  local_c = (undefined4 *)0x0;
  local_2c[1] = &LAB_004bfbad;
  local_2c[0] = *in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)local_2c;
  auStack_38[1] = &LAB_004bf9ce;
  auStack_38[0] = *in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)auStack_38;
  local_8 = param_1;
  iVar4 = FUN_00403224((int *)param_1[1],(int)&PTR_FUN_004bcac4);
  FUN_00403e48((int *)local_14,*(int *)(iVar4 + 0x28));
  iVar4 = FUN_00403224((int *)local_8[1],(int)&PTR_FUN_004bcac4);
  if (*(char *)(iVar4 + 0x2c) == '\0') {
    cVar3 = FUN_004584b0(local_14[0]);
    if (cVar3 == '\0') {
      uVar6 = FUN_00409dd0(local_14[0]);
      if ((char)uVar6 != '\0') {
        FUN_00406a48(&PTR_DAT_004bf7c4,(int *)&stack0xffffffa4);
        local_50._12_4_ = &DAT_004bfbec;
        local_50._8_4_ = "File: ";
        local_50._4_4_ = local_14[0];
        local_50._0_4_ = &DAT_004bfbec;
        pcVar8 = "Try Open with ReadOnly property is TRUE.";
        in_stack_ffffffa8 = (undefined4 *)0x4bf900;
        FUN_004040f0((int *)&stack0xffffffa8,6);
        FUN_00406a48(&PTR_DAT_004bf7c4,(int *)&stack0xffffffa0);
        FUN_00402fe0(*local_8,local_164);
        FUN_00403fd4((int *)&stack0xffffff9c,local_164);
        uVar6 = FUN_0045b554((int *)&PTR_FUN_0045b3e0,'\x01',(undefined4 *)in_stack_ffffff9c,
                             in_stack_ffffffa0,in_stack_ffffffa8,(undefined4 *)pcVar8);
        FUN_0040382c(uVar6);
      }
    }
    FUN_004053f4(&local_174,'\0');
    pVVar7 = &local_174;
    FUN_0040407c((int *)&local_188,(undefined4 *)"; PWD=",local_c);
    FUN_004054ac(&local_184,local_188);
    in_stack_ffffff9c = &local_184;
    pVStackY_68 = (VARIANTARG *)0x4bf993;
    FUN_004053f4(&local_198,'\0');
    pVStackY_68 = &local_198;
    uStackY_6c = 0x4bf9a8;
    FUN_004045b8((BSTR)&local_19c,local_14[0]);
    uStackY_6c = local_19c;
    uStackY_70 = 0x4bf9b4;
    UVar5 = FUN_004bcdbc();
    pVVar1 = pVStackY_68;
    pVStackY_68 = (VARIANTARG *)0x4bf9bb;
    iVar4 = FUN_004b78ac(UVar5,uStackY_6c,pVVar1,in_stack_ffffff9c,pVVar7);
    local_8[0x14] = iVar4;
  }
  else {
    FUN_004053dc((VARIANTARG *)local_2c,4);
    uVar6 = local_2c;
    puVar9 = (undefined4 *)0x4bf864;
    FUN_0040407c((int *)&stack0xffffffc0,(undefined4 *)"; PWD=",local_c);
    FUN_004054ac((VARIANTARG *)&stack0xffffffc4,puVar9);
    pVVar7 = (VARIANTARG *)&stack0xffffffc4;
    local_50._12_4_ = 0x4bf87d;
    FUN_004053f4((VARIANTARG *)local_50,'\x01');
    local_50._12_4_ = local_50;
    local_50._8_4_ = 0x4bf88c;
    FUN_004045b8((BSTR)&stack0xffffffac,local_14[0]);
    local_50._4_4_ = (LPCSTR)0x4bf895;
    local_50._8_4_ = in_stack_ffffffac;
    UVar5 = FUN_004bcdbc();
    uVar2 = local_50._12_4_;
    local_50._12_4_ = (undefined *)0x4bf89c;
    iVar4 = FUN_004b78ac(UVar5,local_50._8_4_,uVar2,pVVar7,(VARIANTARG *)uVar6);
    local_8[0x14] = iVar4;
  }
  *in_FS_OFFSET = (ULONG)in_stack_ffffff9c;
  *in_FS_OFFSET = (ULONG)in_stack_ffffffa8;
  local_50._0_4_ = &LAB_004bfbb7;
  FUN_00403dd4(local_1bc,5);
  FUN_00403db0(&local_1a0);
  FUN_00404474(&local_19c);
  FUN_00405bcc(&local_198);
  FUN_00403db0((int *)&local_188);
  FUN_00404878(&local_184,&DAT_00401108,2);
  FUN_00403dd4((int *)&stack0xffffff9c,4);
  FUN_00404474((undefined4 *)&stack0xffffffac);
  FUN_00405bcc((VARIANTARG *)local_50);
  FUN_00403db0((int *)&stack0xffffffc0);
  FUN_00404878((VARIANTARG *)&stack0xffffffc4,&DAT_00401108,2);
  FUN_00403dd4((int *)local_14,2);
  return;
}

