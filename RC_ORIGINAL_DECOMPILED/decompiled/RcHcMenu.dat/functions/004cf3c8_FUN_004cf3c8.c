/*
 * FUN_004cf3c8 at 004cf3c8
 * undefined __register FUN_004cf3c8(int * param_1, char param_2)
 * Address ranges: 004cf3c8-004cf5a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cf3c8(int *param_1,char param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  int local_12c;
  int local_128 [3];
  byte local_11c [256];
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  char local_9;
  int *local_8;
  
  puStack_130 = &stack0xfffffffc;
  local_128[0] = 0;
  local_12c = 0;
  local_128[2] = 0;
  local_128[1] = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_134 = &LAB_004cf5a1;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  local_9 = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x44))();
  if (cVar1 == '\0') {
    FUN_00402fe0(*local_8,local_11c);
    FUN_00403fd4(&local_1c,local_11c);
    FUN_004040f0(&local_18,3);
    FUN_00403d94(local_18);
  }
  if ((local_9 == '\0') || (*(char *)(local_8[1] + 0x18) == '\0')) {
    cVar1 = FUN_004cf0ec(local_8);
    if (cVar1 != '\0') {
      FUN_00402fe0(*local_8,local_11c);
      FUN_00403fd4(local_128 + 1,local_11c);
      FUN_004040f0(local_128 + 2,3);
      FUN_00403d94(local_128[2]);
    }
    local_10 = (**(code **)(*local_8 + 8))();
  }
  else {
    local_14 = (int *)FUN_004ced1c((int *)local_8[1]);
    FUN_004cf9ac(local_14,(undefined4 *)local_8[6],(undefined4 *)local_8[7]);
    local_10 = (**(code **)(*local_14 + 8))();
    *(undefined1 *)(local_10 + 8) = 1;
    *(undefined1 *)(local_10 + 10) = 0;
  }
  if (*(char *)(local_10 + 9) != '\x02') {
    FUN_00402fe0(*local_8,local_11c);
    FUN_00403fd4(&local_12c,local_11c);
    FUN_004040f0(local_128,3);
    FUN_00403d94(local_128[0]);
  }
  *in_FS_OFFSET = uStack_138;
  puStack_130 = &LAB_004cf5a8;
  puStack_134 = (undefined1 *)0x4cf593;
  FUN_00403dd4(&local_12c,4);
  puStack_134 = (undefined1 *)0x4cf5a0;
  FUN_00403dd4(&local_1c,2);
  return;
}

