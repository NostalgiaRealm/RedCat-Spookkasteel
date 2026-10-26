/*
 * FUN_0055f4cc at 0055f4cc
 * undefined __register FUN_0055f4cc(int param_1, int * param_2)
 * Address ranges: 0055f4cc-0055f53f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0055f4cc(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int extraout_EDX;
  uint uVar3;
  uint extraout_EDX_00;
  
  if (*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c) + 0x30) == param_1) {
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0xc) + 0xc);
    iVar2 = iVar1 + 0x35;
    if (SCARRY4(iVar1,0x35)) {
      param_2 = (int *)thunk_FUN_00402874((uint)param_2);
      iVar2 = extraout_EDX;
    }
    uVar3 = iVar2 - 1;
    if (0x4f < uVar3) {
      param_2 = (int *)thunk_FUN_00402874((uint)param_2);
      uVar3 = extraout_EDX_00;
    }
    FUN_00403e04(param_2,*(undefined4 **)(PTR_DAT_00572404 + (uVar3 + 1) * 4 + -4));
  }
  else {
    FUN_00403e04(param_2,*(undefined4 **)(PTR_DAT_00572404 + 0x7c));
  }
  return;
}

