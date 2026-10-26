/*
 * FUN_0040d348 at 0040d348
 * undefined __register FUN_0040d348(void)
 * Address ranges: 0040d348-0040d502
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040d348(void)

{
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puStack_188;
  undefined1 *puStack_184;
  undefined1 *puStack_180;
  byte *local_174;
  undefined4 local_170;
  undefined1 local_16c;
  int local_168;
  undefined1 local_164;
  undefined4 local_160;
  undefined1 local_15c;
  byte *local_158;
  undefined *local_154;
  int local_150;
  undefined4 local_14c;
  undefined1 local_148;
  int local_144;
  undefined1 local_140;
  int local_13c;
  undefined1 local_138;
  undefined4 local_134;
  undefined1 local_130;
  CHAR local_129 [261];
  _MEMORY_BASIC_INFORMATION local_24;
  int local_8;
  
  puStack_180 = &stack0xfffffffc;
  local_174 = (byte *)0x0;
  local_150 = 0;
  local_158 = (byte *)0x0;
  local_154 = (undefined *)0x0;
  local_8 = 0;
  puStack_184 = &LAB_0040d503;
  puStack_188 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_188;
  iVar1 = *(int *)(in_stack_00000004 + -4);
  if (*(int *)(iVar1 + 0x14) == 0) {
    puStack_180 = &stack0xfffffffc;
    FUN_00406a48((undefined4 *)PTR_PTR_00572620,&local_8);
  }
  else {
    FUN_00406a48((undefined4 *)PTR_PTR_00572408,&local_8);
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x18);
  VirtualQuery(*(LPCVOID *)(iVar1 + 0xc),&local_24,0x1c);
  if (local_24.State == 0x1000) {
    DVar3 = GetModuleFileNameA(local_24.AllocationBase,local_129,0x105);
    if (DVar3 != 0) {
      local_14c = *(undefined4 *)(iVar1 + 0xc);
      local_148 = 5;
      FUN_00403fe0((int *)&local_154,local_129,0x105);
      FUN_0040a014(local_154,&local_150);
      local_144 = local_150;
      local_140 = 0xb;
      local_13c = local_8;
      local_138 = 0xb;
      local_130 = 5;
      puVar5 = &local_14c;
      uVar4 = 3;
      local_134 = uVar2;
      FUN_00406a48((undefined4 *)PTR_PTR_005724b0,(int *)&local_158);
      FUN_0040cf28((int)&DAT_00409178,'\x01',local_158,uVar4,puVar5);
      goto LAB_0040d4d2;
    }
  }
  local_170 = *(undefined4 *)(iVar1 + 0xc);
  local_16c = 5;
  local_168 = local_8;
  local_164 = 0xb;
  local_15c = 5;
  puVar5 = &local_170;
  uVar4 = 2;
  local_160 = uVar2;
  FUN_00406a48((undefined4 *)PTR_PTR_00572544,(int *)&local_174);
  FUN_0040cf28((int)&DAT_00409178,'\x01',local_174,uVar4,puVar5);
LAB_0040d4d2:
  *in_FS_OFFSET = uVar4;
  puStack_188 = &LAB_0040d50a;
  FUN_00403db0((int *)&local_174);
  FUN_00403dd4((int *)&local_158,3);
  FUN_00403db0(&local_8);
  return;
}

