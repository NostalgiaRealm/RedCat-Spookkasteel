/*
 * FUN_004f63b0 at 004f63b0
 * undefined __register FUN_004f63b0(int * param_1, char param_2)
 * Address ranges: 004f63b0-004f6401
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f63b0(int *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  WPARAM WVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  iVar2 = FUN_004f60bc((int)param_1,param_1[0x91],param_2,'\x01');
  if ((iVar2 != 0) && (iVar2 != param_1[0x91])) {
    cVar1 = FUN_00403270(param_1,extraout_EDX,extraout_ECX);
    if (cVar1 != '\0') {
      WVar3 = FUN_004f5a64(iVar2);
      FUN_004f5300(param_1,WVar3);
      FUN_00403270(param_1,extraout_EDX_00,extraout_ECX_00);
    }
  }
  return;
}

