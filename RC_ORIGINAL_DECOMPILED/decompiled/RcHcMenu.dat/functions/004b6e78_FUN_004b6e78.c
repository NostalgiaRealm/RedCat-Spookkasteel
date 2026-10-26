/*
 * FUN_004b6e78 at 004b6e78
 * undefined __register FUN_004b6e78(int * param_1, char param_2, undefined4 param_3, undefined4 * param_4, int param_5)
 * Address ranges: 004b6e78-004b6faa;004b6fbe-004b6fc7;004b6fdf-004b704a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_004b6e78(int *param_1,char param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  undefined1 *puVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *extraout_ECX;
  undefined1 extraout_DL;
  undefined1 uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_50;
  undefined1 *puStackY_4c;
  undefined1 *puStackY_48;
  undefined4 *puStackY_44;
  char *local_40;
  undefined4 *local_3c;
  LPCSTR local_38;
  LPCWSTR local_34;
  LPCWSTR local_30;
  undefined4 in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  undefined4 *local_10;
  undefined4 uStack_c;
  int *local_8;
  
  local_8 = (int *)0x7;
  do {
    uStack_c = 0;
    local_8 = (int *)((int)local_8 + -1);
  } while (local_8 != (int *)0x0);
  LOCK();
  piVar6 = (int *)0x0;
  UNLOCK();
  uVar7 = 0;
  if (param_2 != '\0') {
    local_30 = (LPCWSTR)0x4b6e9a;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,0,in_stack_ffffffd4,in_stack_ffffffd8);
    piVar6 = extraout_ECX;
    uVar7 = extraout_DL;
  }
  uStack_c = CONCAT13(uVar7,(undefined3)uStack_c);
  local_34 = L"ꓩ\xf4c7\xebff诈ﱅ綀ûུ쳨\xf4c3擿֏";
  local_38 = (LPCSTR)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_38;
  local_3c = (undefined4 *)0x4b6eb8;
  local_30 = (LPCWSTR)&stack0xfffffffc;
  local_8 = param_1;
  FUN_00403db0((int *)&local_10);
  local_3c = (undefined4 *)0x4b6ec5;
  FUN_00403e48((int *)&local_10,0x4b7080);
  local_40 = &LAB_004b6fc8;
  puStackY_44 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStackY_44;
  local_3c = (undefined4 *)&stack0xfffffffc;
  for (; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
    puStackY_48 = (undefined1 *)0x4b6ee9;
    uVar3 = FUN_0040320c(piVar6,(int)&PTR_FUN_004b672c);
    if ((char)uVar3 != '\0') break;
  }
  if (piVar6 != (int *)0x0) {
    puStackY_48 = (undefined1 *)0x4b6f02;
    iVar4 = FUN_00403224(piVar6,(int)&PTR_FUN_004b672c);
    puStackY_48 = (undefined1 *)0x4b6f0d;
    iVar5 = FUN_004b7790(iVar4);
    puStackY_48 = (undefined1 *)0x4b6f12;
    sVar2 = FUN_004b74a4(iVar5);
    if (-1 < sVar2 + -1) {
      puStackY_48 = (undefined1 *)0x4b6f31;
      puStackY_48 = (undefined1 *)FUN_004b7790(iVar4);
      puStackY_4c = (undefined1 *)0x4b6f3d;
      FUN_004053dc((VARIANTARG *)&local_30,0);
      puVar1 = puStackY_48;
      puStackY_48 = (undefined1 *)0x4b6f46;
      piVar6 = (int *)FUN_004b7ce0((int)puVar1,(VARIANTARG *)&local_30);
      puStackY_4c = &LAB_004b6fab;
      uStackY_50 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStackY_50;
      puStackY_48 = &stack0xfffffffc;
      FUN_0040407c((int *)&local_38,local_10,(undefined4 *)&DAT_004b708c);
      FUN_004045b8((BSTR)&local_34,local_38);
      FUN_004b7c24((int)piVar6,&local_3c);
      FUN_004045d4((int *)&local_34,local_3c);
      FUN_00403ff8((int *)&local_10,local_34);
      *in_FS_OFFSET = uStackY_50;
      puStackY_48 = &DAT_004b6fb2;
      puStackY_4c = (undefined1 *)0x4b6faa;
      FUN_00403094(piVar6);
      return;
    }
  }
  *in_FS_OFFSET = puStackY_44;
  local_3c = param_4;
  local_40 = " failed";
  puStackY_44 = local_10;
  puStackY_48 = (undefined1 *)0x4b6ff7;
  FUN_004040f0((int *)&local_40,3);
  puStackY_48 = (undefined1 *)0x4b7004;
  FUN_0040ceec(local_8,'\0',(undefined4 *)local_40);
  local_8[3] = param_5;
  *in_FS_OFFSET = puStackY_44;
  local_3c = (undefined4 *)&LAB_004b7052;
  local_40 = (char *)0x4b7022;
  FUN_00403db0((int *)&local_40);
  local_40 = (char *)0x4b702a;
  FUN_00404474(&local_3c);
  local_40 = (char *)0x4b7032;
  FUN_00403db0((int *)&local_38);
  local_40 = (char *)0x4b703a;
  FUN_00404474(&local_34);
  local_40 = (char *)0x4b7042;
  FUN_00405bcc((VARIANTARG *)&local_30);
  local_40 = (char *)0x4b704a;
  FUN_00403db0((int *)&local_10);
  return;
}

