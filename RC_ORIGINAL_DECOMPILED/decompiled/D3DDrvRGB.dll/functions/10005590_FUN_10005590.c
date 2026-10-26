/*
 * FUN_10005590 at 10005590
 * undefined4 __cdecl FUN_10005590(int param_1)
 * Address ranges: 10005590-1000561b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10005590(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int local_4;
  
  piVar3 = (int *)(param_1 + 0x1a4);
  local_4 = 0x80;
  do {
    if (piVar3[-0x20] != 0) {
      iVar4 = 0;
      if (0 < piVar3[1]) {
        piVar2 = (int *)(*piVar3 + 8);
        do {
          piVar1 = (int *)*piVar2;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          iVar4 = iVar4 + 1;
          piVar2 = piVar2 + 5;
        } while (iVar4 < piVar3[1]);
      }
      if ((LPVOID)*piVar3 != (LPVOID)0x0) {
        FUN_10008c95((LPVOID)*piVar3);
      }
      *piVar3 = 0;
      piVar3[1] = 0;
    }
    piVar3 = piVar3 + 0x29;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  FUN_10005f70(*(int *)(param_1 + 0x108));
  return 1;
}

