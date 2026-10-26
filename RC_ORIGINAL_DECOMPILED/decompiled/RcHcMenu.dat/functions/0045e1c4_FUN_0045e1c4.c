/*
 * FUN_0045e1c4 at 0045e1c4
 * undefined __register FUN_0045e1c4(undefined4 * param_1)
 * Address ranges: 0045e1c4-0045e247;0045e358-0045e3ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045e1c4(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  int local_124 [67];
  int local_18 [3];
  int local_c;
  undefined4 *local_8;
  
  puStack_134 = &stack0xfffffffc;
  local_124[1] = 0;
  local_124[0] = 0;
  local_18[1] = 0;
  local_18[0] = 0;
  puStack_138 = &LAB_0045e3ac;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  local_c = 0;
  local_8 = param_1;
  while( true ) {
    puStack_140 = (undefined1 *)0x45e378;
    iVar3 = FUN_0045ba40((int)local_8);
    if (iVar3 <= local_c) break;
    puStack_140 = (undefined1 *)0x45e207;
    local_18[2] = FUN_0045ba40((int)local_8);
    puStack_144 = &LAB_0045e248;
    uStack_148 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_148;
    puStack_140 = &stack0xfffffffc;
    piVar1 = (int *)(**(code **)*local_8)(local_8,local_c);
    iVar3 = FUN_00403224(piVar1,(int)&PTR_FUN_0045e06c);
    (**(code **)(iVar3 + 8))(*(undefined4 *)(iVar3 + 0xc),local_8[3]);
    *in_FS_OFFSET = uStack_148;
    puStack_140 = (undefined1 *)0x45e360;
    uVar2 = FUN_0045ba40((int)local_8);
    if (uVar2 == local_18[2]) {
      bVar4 = SCARRY4(local_c,1);
      local_c = local_c + 1;
      if (bVar4) {
        puStack_140 = (undefined1 *)0x45e370;
        thunk_FUN_00402874(uVar2);
      }
    }
  }
  *in_FS_OFFSET = uStack_13c;
  puStack_134 = &LAB_0045e3b3;
  puStack_138 = (undefined1 *)0x45e39e;
  FUN_00403dd4(local_124,2);
  puStack_138 = (undefined1 *)0x45e3ab;
  FUN_00403dd4(local_18,2);
  return;
}

