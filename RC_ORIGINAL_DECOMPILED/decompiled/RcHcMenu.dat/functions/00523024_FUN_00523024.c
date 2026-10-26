/*
 * FUN_00523024 at 00523024
 * undefined __register FUN_00523024(int * param_1, int param_2)
 * Address ranges: 00523024-0052305d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00523024(int *param_1,int param_2)

{
  LONG local_1c [2];
  undefined4 local_14;
  int local_c;
  int *local_8;
  
  local_c = param_2;
  local_8 = param_1;
  (**(code **)(*param_1 + 0x40))(param_1,local_1c);
  local_1c[0] = *(LONG *)(local_c + 0x14);
  local_14 = *(undefined4 *)(local_c + 0x1c);
  FUN_004ab7f0(local_8,local_1c,'\0');
  return;
}

