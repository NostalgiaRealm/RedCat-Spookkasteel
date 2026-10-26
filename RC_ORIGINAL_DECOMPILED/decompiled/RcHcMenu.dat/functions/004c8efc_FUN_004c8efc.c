/*
 * FUN_004c8efc at 004c8efc
 * undefined __register FUN_004c8efc(int * param_1, int param_2)
 * Address ranges: 004c8efc-004c8f86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c8efc(int *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if ((((*(short *)(param_2 + 4) == 0xd) && ((char)param_1[0x4c] != '\0')) ||
      ((*(short *)(param_2 + 4) == 0x1b && (*(char *)((int)param_1 + 0x129) != '\0')))) &&
     (((bVar1 = FUN_004486a4(*(uint *)(param_2 + 8)), bVar1 == 0 &&
       (cVar2 = FUN_004c9180(param_1), cVar2 != '\0')) && (DAT_005719f8 != '\0')))) {
    FUN_00403270(param_1,extraout_EDX,extraout_ECX);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}

