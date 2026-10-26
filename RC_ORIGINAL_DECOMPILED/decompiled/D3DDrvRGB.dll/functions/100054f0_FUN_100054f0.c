/*
 * FUN_100054f0 at 100054f0
 * undefined __cdecl FUN_100054f0(int param_1)
 * Address ranges: 100054f0-10005559
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100054f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x14) + -1;
  *(int *)(param_1 + 0x14) = iVar2;
  if ((iVar2 == 0) && (*(int *)(param_1 + 0x94) != 0)) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x98)) {
      piVar3 = (int *)(*(int *)(param_1 + 0x94) + 8);
      do {
        piVar1 = (int *)*piVar3;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 5;
      } while (iVar2 < *(int *)(param_1 + 0x98));
    }
    FUN_10008c95(*(LPVOID *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  return;
}

