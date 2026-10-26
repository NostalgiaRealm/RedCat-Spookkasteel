/*
 * FUN_00433560 at 00433560
 * undefined4 __register FUN_00433560(int * param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 00433560-004335c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00433560(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)((int)param_1 + 0x4b) == '\x05') {
    uVar2 = CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  else {
    local_10 = *param_2;
    local_c = *param_3;
    uVar2 = (**(code **)(*param_1 + 0x34))(param_1,&local_10,&local_c);
    bVar1 = *(byte *)((int)param_1 + 0x4b);
    if ((bVar1 == 0) || ((byte)(bVar1 - 3) < 2)) {
      *param_2 = local_10;
    }
    if (bVar1 < 3) {
      *param_3 = local_c;
    }
  }
  return uVar2;
}

