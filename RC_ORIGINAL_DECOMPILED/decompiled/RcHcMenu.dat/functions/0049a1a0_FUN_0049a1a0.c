/*
 * FUN_0049a1a0 at 0049a1a0
 * undefined4 __register FUN_0049a1a0(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0049a1a0-0049a213
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0049a1a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0x43c) < 1) {
    local_c = 0;
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\0') {
      *(undefined1 *)(param_1 + 0x14) = 0;
      piVar1 = FUN_00499078(param_1,param_2,param_3);
      uVar2 = FUN_0049900c((int)piVar1,(int *)(param_1 + 0x438));
      piVar1 = FUN_00499078(uVar2,extraout_EDX,extraout_ECX);
      iVar3 = FUN_00498e94((int)piVar1,(int *)(param_1 + 0x15),*(int *)(param_1 + 0x43c));
      *(int *)(param_1 + 0x438) = iVar3;
    }
    local_c = *(undefined4 *)(param_1 + 0x438);
  }
  return local_c;
}

