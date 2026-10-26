/*
 * FUN_0055a71c at 0055a71c
 * undefined4 __register FUN_0055a71c(int param_1, int param_2)
 * Address ranges: 0055a71c-0055a7e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0055a71c(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  
  uVar2 = FUN_0055a5c8(param_1,*(int *)(param_1 + 0x30c),param_2);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_0055a5c8(param_1,*(int *)(param_1 + 0x308),param_2);
    if ((char)uVar2 == '\0') {
      uVar2 = FUN_0055a5c8(param_1,*(int *)(param_1 + 0x310),param_2);
      if ((char)uVar2 == '\0') {
        uVar2 = FUN_0055a5c8(param_1,*(int *)(param_1 + 0x314),param_2);
        if ((char)uVar2 == '\0') {
          uVar2 = FUN_0055a5c8(param_1,*(int *)(param_1 + 0x318),param_2);
          if ((char)uVar2 == '\0') {
            uVar2 = FUN_0055a5c8(param_1,*(int *)(param_1 + 0x31c),param_2);
            if ((char)uVar2 == '\0') {
              uVar2 = FUN_0055a5c8(param_1,*(int *)(param_1 + 800),param_2);
              if ((char)uVar2 == '\0') {
                uVar1 = 0;
                uVar3 = 0;
                goto LAB_0055a7da;
              }
            }
          }
        }
      }
    }
  }
  uVar3 = (undefined3)((uint)uVar2 >> 8);
  uVar1 = 1;
LAB_0055a7da:
  return CONCAT31(uVar3,uVar1);
}

