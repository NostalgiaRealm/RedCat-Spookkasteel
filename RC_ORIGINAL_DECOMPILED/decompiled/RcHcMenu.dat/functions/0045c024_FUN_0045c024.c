/*
 * FUN_0045c024 at 0045c024
 * undefined __register FUN_0045c024(int * param_1, int param_2)
 * Address ranges: 0045c024-0045c238
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045c024(int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  int local_134 [4];
  undefined1 local_124;
  int local_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_138 = &stack0xfffffffc;
  local_134[2] = 0;
  local_134[1] = 0;
  local_134[0] = 0;
  local_18 = 0;
  local_1c = 0;
  local_120 = 0;
  puStack_13c = &LAB_0045c239;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  local_14 = 0;
  local_10 = 0;
  local_c = param_2;
  local_8 = param_1;
  while (local_14 == 0) {
    iVar3 = FUN_0045ba40(local_8[2]);
    if (iVar3 <= local_10) break;
    piVar2 = (int *)(*(code *)**(undefined4 **)local_8[2])((undefined4 *)local_8[2],local_10);
    iVar3 = FUN_00403224(piVar2,(int)&LAB_0045bc2c);
    bVar1 = FUN_0045bcec(iVar3,local_c);
    if (bVar1) {
      piVar2 = (int *)(*(code *)**(undefined4 **)local_8[2])((undefined4 *)local_8[2],local_10);
      local_14 = FUN_00403224(piVar2,(int)&LAB_0045bc2c);
    }
    else {
      bVar4 = SCARRY4(local_10,1);
      local_10 = local_10 + 1;
      if (bVar4) {
        thunk_FUN_00402874(CONCAT31(extraout_var,bVar1));
      }
    }
  }
  if (local_14 == 0) {
    FUN_00402fe0(*local_8,local_11c);
    FUN_00403fd4(&local_1c,local_11c);
    local_134[3] = local_c;
    local_124 = 5;
    FUN_0040a894((byte *)
                 ": Finalization procedure (%p) should be registered.\r\nThis address can be used to find the procedure.\r\n(Delphi 5 Search-menu Find error)\r\n"
                 ,local_134 + 3,0,&local_120);
    FUN_004040f0(&local_18,4);
    FUN_00403d94(local_18);
  }
  if (*(char *)(local_14 + 4) != '\0') {
    FUN_00402fe0(*local_8,local_11c);
    FUN_00403fd4(local_134 + 1,local_11c);
    local_134[3] = local_c;
    local_124 = 5;
    FUN_0040a894((byte *)
                 ": Finalization procedure (%p) is already added to finalizationlist.\r\nThis address can be used to find the procedure.\r\n(Delphi Search-menu Find error)\r\n"
                 ,local_134 + 3,0,local_134);
    FUN_004040f0(local_134 + 2,4);
    FUN_00403d94(local_134[2]);
  }
  *(undefined1 *)(local_14 + 4) = 1;
  (**(code **)(*(int *)local_8[2] + 0x14))((int *)local_8[2],local_10);
  (**(code **)(*(int *)local_8[2] + 0xc))((int *)local_8[2],local_14);
  *in_FS_OFFSET = uStack_140;
  puStack_138 = &LAB_0045c240;
  puStack_13c = (undefined1 *)0x45c220;
  FUN_00403dd4(local_134,3);
  puStack_13c = (undefined1 *)0x45c22b;
  FUN_00403db0(&local_120);
  puStack_13c = (undefined1 *)0x45c238;
  FUN_00403dd4(&local_1c,2);
  return;
}

