/*
 * FUN_0042cc30 at 0042cc30
 * undefined __register FUN_0042cc30(int * param_1, uint * param_2, undefined4 param_3)
 * Address ranges: 0042cc30-0042cc92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042cc30(int *param_1,uint *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 extraout_ECX;
  
  if ((((*(byte *)(param_1 + 8) & 0x10) == 0) &&
      (((*param_2 == 0x201 || (*param_2 == 0x203)) &&
       (bVar1 = FUN_00432e68((int)param_1), param_3 = extraout_ECX, !bVar1)))) &&
     (*(char *)((int)param_1 + 0x4d) == '\x01')) {
    bVar1 = FUN_00436138(param_1,param_2);
    if (bVar1) {
      return;
    }
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 1;
    (**(code **)(*param_1 + -0x14))(param_1,param_2);
    return;
  }
  FUN_004361cc(param_1,param_2,param_3);
  return;
}

