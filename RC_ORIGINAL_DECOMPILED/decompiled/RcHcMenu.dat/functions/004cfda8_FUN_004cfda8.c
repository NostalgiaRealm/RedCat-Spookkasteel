/*
 * FUN_004cfda8 at 004cfda8
 * undefined __register FUN_004cfda8(int * param_1, int param_2)
 * Address ranges: 004cfda8-004cfeb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cfda8(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  int local_120;
  int local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_11c = 0;
  local_120 = 0;
  local_18 = 0;
  puStack_12c = &LAB_004cfeba;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  local_c = param_2;
  local_8 = param_1;
  piVar2 = (int *)FUN_00497394(0,param_2,0);
  piVar2 = (int *)FUN_0049756c(piVar2,local_c);
  FUN_00402fe0(*piVar2,local_118);
  FUN_00403fd4(&local_18,local_118);
  FUN_004cf8cc(local_8,extraout_EDX,extraout_ECX);
  cVar1 = (**(code **)(*(int *)local_8[4] + 0x78))((int *)local_8[4],local_18,&local_14);
  if (cVar1 == '\0') {
    local_10 = 0;
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(&local_120,local_118);
    FUN_004040f0(&local_11c,6);
    FUN_00403d94(local_11c);
  }
  else {
    local_10 = FUN_004cfc68(local_8,local_14);
  }
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_004cfec1;
  puStack_12c = (undefined1 *)0x4cfeb1;
  FUN_00403dd4(&local_120,2);
  puStack_12c = (undefined1 *)0x4cfeb9;
  FUN_00403db0(&local_18);
  return;
}

