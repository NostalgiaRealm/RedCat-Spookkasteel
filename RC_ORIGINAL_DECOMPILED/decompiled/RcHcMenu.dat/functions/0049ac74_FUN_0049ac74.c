/*
 * FUN_0049ac74 at 0049ac74
 * undefined4 __register FUN_0049ac74(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0049ac74-0049acfc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0049ac74(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_0049ab48(param_1,param_2,param_3);
    piVar2 = FUN_0041c468((int *)&PTR_FUN_0041a794,'\x01',extraout_ECX);
    *(int **)(param_1 + 0x20) = piVar2;
    FUN_0041cfec(*(int **)(param_1 + 0x20),*(int *)(*(int *)(param_1 + 0x24) + 0x420));
    if (*(int *)(*(int *)(param_1 + 0x24) + 0x420) == 0) {
      FUN_00403d94(
                  "DIB does not yet have an image/canvas.\r\nEither assign an image to the DIB or call it\'s SetSize method."
                  );
    }
    iVar1 = *(int *)(param_1 + 0x20);
    *(int *)(iVar1 + 0x34) = param_1;
    *(code **)(iVar1 + 0x30) = FUN_0049aa64;
  }
  return *(undefined4 *)(param_1 + 0x20);
}

