/*
 * FUN_00490354 at 00490354
 * undefined __register FUN_00490354(int * param_1, int param_2)
 * Address ranges: 00490354-0049050c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00490354(int *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_148;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  int local_12c;
  int local_128 [3];
  byte local_11c [256];
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_134 = &stack0xfffffffc;
  local_12c = 0;
  local_128[0] = 0;
  local_128[2] = 0;
  local_128[1] = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_138 = &LAB_0049050d;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_1 == (int *)0x0) {
    FUN_00402fe0(iRam00000000,local_11c);
    FUN_00403fd4(&local_1c,local_11c);
    pcStack_148 = " self is nil";
    FUN_004040f0(&local_18,3);
    FUN_00403d94(local_18);
    puVar1 = puStack_134;
  }
  puStack_134 = puVar1;
  if (local_8[1] == 0) {
    FUN_00402fe0(*local_8,local_11c);
    FUN_00403fd4(local_128 + 1,local_11c);
    FUN_004040f0(local_128 + 2,3);
    FUN_00403d94(local_128[2]);
  }
  FUN_00402fe0(local_c,local_11c);
  FUN_00403fd4(local_128,local_11c);
  cVar2 = (**(code **)(*(int *)local_8[1] + 0x78))((int *)local_8[1],local_128[0],&local_14);
  if (cVar2 == '\0') {
    FUN_0048ea64(local_8,local_c,&local_12c);
    cVar2 = (**(code **)(*(int *)local_8[1] + 0x78))((int *)local_8[1],local_12c,&local_14);
    if (cVar2 == '\0') {
      local_10 = 0;
    }
    else {
      piVar3 = (int *)(**(code **)(*(int *)local_8[1] + 0x18))((int *)local_8[1],local_14);
      local_10 = FUN_00403224(piVar3,(int)&PTR_FUN_0048e794);
    }
  }
  else {
    piVar3 = (int *)(**(code **)(*(int *)local_8[1] + 0x18))((int *)local_8[1],local_14);
    local_10 = FUN_00403224(piVar3,(int)&PTR_FUN_0048e794);
  }
  *in_FS_OFFSET = pcStack_148;
  FUN_00403dd4(&local_12c,4);
  FUN_00403dd4(&local_1c,2);
  return;
}

