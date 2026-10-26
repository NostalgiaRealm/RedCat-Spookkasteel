/*
 * FUN_004f1010 at 004f1010
 * undefined __register FUN_004f1010(int param_1)
 * Address ranges: 004f1010-004f10d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f1010(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  bool bVar7;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_10;
  int local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = (int *)0x0;
  puStack_18 = &LAB_004f10d6;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1 == 0) {
    FUN_00403d94("OAC_DisconnectControls:  Parameter cannot be nil");
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  local_c = 0;
  while( true ) {
    iVar6 = FUN_0043579c(local_8);
    if (iVar6 <= local_c) break;
    piVar3 = (int *)FUN_00435760(local_8,local_c);
    piVar4 = FUN_00406aa0((int *)&local_10);
    cVar2 = FUN_00403128(piVar3,(int *)&DAT_004f1148,piVar4);
    if (cVar2 == '\0') {
      piVar3 = (int *)FUN_00435760(local_8,local_c);
      uVar5 = FUN_0040320c(piVar3,(int)&PTR_FUN_0042ebec);
      if ((char)uVar5 != '\0') {
        iVar6 = FUN_00435760(local_8,local_c);
        uVar5 = FUN_004f1010(iVar6);
      }
    }
    else {
      uVar5 = (**(code **)(*local_10 + 0x40))(local_10,0);
    }
    bVar7 = SCARRY4(local_c,1);
    local_c = local_c + 1;
    if (bVar7) {
      thunk_FUN_00402874(uVar5);
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004f10dd;
  puStack_18 = (undefined1 *)0x4f10d5;
  FUN_00406aa0((int *)&local_10);
  return;
}

