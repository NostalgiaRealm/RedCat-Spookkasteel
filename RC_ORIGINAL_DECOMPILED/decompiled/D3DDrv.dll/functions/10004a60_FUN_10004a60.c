/*
 * FUN_10004a60 at 10004a60
 * undefined4 __cdecl FUN_10004a60(int param_1)
 * Address ranges: 10004a60-10004af8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10004a60(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_4;
  
  piVar4 = (int *)(param_1 + 0x1a4);
  local_4 = 0x80;
  do {
    if (piVar4[-0x20] != 0) {
      iVar2 = 0;
      if (0 < piVar4[1]) {
        piVar3 = (int *)(*piVar4 + 8);
        do {
          piVar1 = (int *)piVar3[1];
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          piVar1 = (int *)*piVar3;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 6;
        } while (iVar2 < piVar4[1]);
      }
      if ((LPVOID)*piVar4 != (LPVOID)0x0) {
        FUN_1000824b((LPVOID)*piVar4);
      }
      *piVar4 = 0;
      piVar4[1] = 0;
    }
    piVar4 = piVar4 + 0x29;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  FUN_10005450(*(int *)(param_1 + 0x108));
  return 1;
}

