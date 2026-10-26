/*
 * FUN_00435a24 at 00435a24
 * undefined __register FUN_00435a24(int * param_1)
 * Address ranges: 00435a24-00435bae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00435a24(int *param_1)

{
  ATOM AVar1;
  undefined4 uVar2;
  BOOL BVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uStack_d8;
  undefined1 *puStack_d4;
  undefined1 *puStack_d0;
  byte *local_c4;
  int local_c0;
  undefined1 local_bc;
  tagWNDCLASSA local_b8;
  undefined1 local_90 [7];
  byte local_89;
  int local_74;
  WNDCLASSA local_6c;
  CHAR local_44 [64];
  
  puStack_d0 = &stack0xfffffffc;
  local_c4 = (byte *)0x0;
  puStack_d4 = &LAB_00435baf;
  uStack_d8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_d8;
  (**(code **)(*param_1 + 0x90))(param_1,local_90);
  if ((local_74 == 0) && ((local_89 & 0x40) != 0)) {
    piVar4 = (int *)param_1[1];
    if ((piVar4 != (int *)0x0) && ((*(byte *)(piVar4 + 8) & 2) != 0)) {
      uVar2 = FUN_0040320c(piVar4,(int)&PTR_FUN_0042ebec);
      if ((char)uVar2 != '\0') {
        local_74 = FUN_00438988(piVar4);
        goto LAB_00435ad0;
      }
    }
    local_c0 = param_1[2];
    local_bc = 0xb;
    piVar4 = &local_c0;
    uVar2 = 0;
    FUN_00406a48((undefined4 *)PTR_PTR_00572454,(int *)&local_c4);
    uVar2 = FUN_0040cf28((int)&DAT_0041071c,'\x01',local_c4,uVar2,piVar4);
    FUN_0040382c(uVar2);
  }
LAB_00435ad0:
  param_1[0x4f] = (int)local_6c.lpfnWndProc;
  BVar3 = GetClassInfoA(local_6c.hInstance,local_44,&local_b8);
  if ((BVar3 == 0) || (local_b8.lpfnWndProc != FUN_0042f874)) {
    if (BVar3 != 0) {
      UnregisterClassA(local_44,local_6c.hInstance);
    }
    local_6c.lpfnWndProc = FUN_0042f874;
    local_6c.lpszClassName = local_44;
    AVar1 = RegisterClassA(&local_6c);
    if (AVar1 == 0) {
      FUN_0040e0a4();
    }
  }
  DAT_0056f798 = param_1;
  (**(code **)(*param_1 + 0x94))(param_1,local_90);
  if (param_1[0x53] == 0) {
    FUN_0040e0a4();
  }
  FUN_0040a3ac(param_1[0x15]);
  param_1[0x15] = 0;
  FUN_00438c90((int)param_1);
  uVar5 = 1;
  uVar2 = FUN_0041bb5c(param_1[0x16]);
  FUN_00433700((int)param_1,0x30,uVar2,uVar5);
  if ((char)param_1[0x13] != '\0') {
    FUN_00403270(param_1,extraout_EDX,extraout_ECX);
  }
  *in_FS_OFFSET = uStack_d8;
  puStack_d0 = &LAB_00435bb6;
  puStack_d4 = (undefined1 *)0x435bae;
  FUN_00403db0((int *)&local_c4);
  return;
}

