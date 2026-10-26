/*
 * FUN_004bc5d0 at 004bc5d0
 * undefined __register FUN_004bc5d0(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 004bc5d0-004bc70b;004bc713-004bc742;004bc75f-004bc78a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004bc5d0(int *param_1,char param_2,undefined4 param_3)

{
  LPVOID *ppv;
  uint uVar1;
  undefined4 extraout_ECX;
  int iVar2;
  undefined1 extraout_DL;
  ulong *puVar3;
  IID *pIVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uStack_9c;
  char *pcVar7;
  undefined4 uStack_78;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 in_stack_ffffffb8;
  undefined4 in_stack_ffffffbc;
  OLECHAR local_2c [2];
  IID local_28;
  OLECHAR *local_18;
  int *local_14;
  int *local_10;
  undefined1 local_9;
  int *local_8;
  
  bVar5 = 0;
  local_2c[0] = L'\0';
  local_2c[1] = L'\0';
  local_10 = (int *)0x0;
  local_14 = (int *)0x0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_4c = (undefined1 *)0x4bc5f0;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffb8,in_stack_ffffffbc);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_50 = &LAB_004bc7b8;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  local_8 = param_1;
  if ((char)param_3 == '\0') {
    puVar3 = &DAT_005719cc;
    pIVar4 = &local_28;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      pIVar4->Data1 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      pIVar4 = (IID *)((int)pIVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
  }
  else {
    puVar3 = &DAT_005719dc;
    pIVar4 = &local_28;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      pIVar4->Data1 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      pIVar4 = (IID *)((int)pIVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
  }
  puStack_58 = (undefined1 *)0x4bc62d;
  puStack_4c = &stack0xfffffffc;
  FUN_004b6e60();
  puStack_5c = &LAB_004bc78b;
  puStack_60 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_60;
  puStack_58 = &stack0xfffffffc;
  ppv = (LPVOID *)FUN_00406aa0((int *)&local_10);
  uStack_78 = 0x4bc656;
  uVar1 = CoGetClassObject(&local_28,1,(LPVOID)0x0,(IID *)&DAT_004bc7e4,ppv);
  iVar2 = FUN_00408554(uVar1);
  if (iVar2 == 0) {
    pcVar7 = "DAO.CreateEngineFactory";
    uVar6 = FUN_004b6e78((int *)&DAT_004b64c0,'\x01',0,(undefined4 *)"DAO.CreateEngineFactory",uVar1
                        );
    FUN_0040382c(uVar6);
    *in_FS_OFFSET = pcVar7;
    puStack_60 = &LAB_004bc792;
    FUN_004b6e4c();
    return;
  }
  *in_FS_OFFSET = &stack0xffffff94;
  local_18 = FUN_00404d48("mbmabptebkjcdlgtjmskjwtsdhjbmkmwtrak");
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  FUN_00406aa0((int *)&local_14);
  FUN_0040457c(local_2c,local_18);
  uVar1 = (**(code **)(*local_10 + 0x1c))();
  iVar2 = FUN_00408554(uVar1);
  if (iVar2 == 0) {
    pcVar7 = "DAO.CreateEngine";
    uStack_9c = 0x4bc727;
    uVar6 = FUN_004b6e78((int *)&DAT_004b64c0,'\x01',0,(undefined4 *)"DAO.CreateEngine",uVar1);
    uStack_9c = 0x4bc72c;
    FUN_0040382c(uVar6);
    *in_FS_OFFSET = pcVar7;
    SysFreeString(local_18);
    return;
  }
  uStack_9c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_9c;
  uVar6 = 0;
  FUN_004b70d4(local_8,'\0',local_14,0);
  if (DAT_005719ec == '\0') {
    LoadLibraryA("MSJET35.dll");
    DAT_005719ec = '\x01';
  }
  *in_FS_OFFSET = uVar6;
  return;
}

