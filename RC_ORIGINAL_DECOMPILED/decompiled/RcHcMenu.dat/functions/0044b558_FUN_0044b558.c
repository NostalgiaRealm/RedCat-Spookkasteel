/*
 * FUN_0044b558 at 0044b558
 * undefined __register FUN_0044b558(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0044b558-0044b5d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044b558(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  char cVar3;
  
  cVar3 = (char)param_2;
  if (cVar3 != *(char *)((int)param_1 + 0x217)) {
    if ((cVar3 == '\x01') && ((char)param_1[0x86] == '\0')) {
      FUN_0044b8ac((int)param_1,'\x01');
      param_3 = extraout_ECX;
      param_2 = extraout_EDX;
    }
    if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
      FUN_00435d9c(param_1);
      param_3 = extraout_ECX_00;
      param_2 = extraout_EDX_00;
    }
    cVar1 = *(char *)((int)param_1 + 0x217);
    *(char *)((int)param_1 + 0x217) = cVar3;
    if (((cVar3 == '\x02') || (cVar1 == '\x02')) && ((char)param_1[0x4e] == '\0')) {
      iVar2 = FUN_0044b928((int)param_1);
      FUN_004328a0((int)param_1,iVar2);
      param_3 = extraout_ECX_01;
      param_2 = extraout_EDX_01;
    }
    if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
      FUN_00435f34(param_1);
      param_3 = extraout_ECX_02;
      param_2 = extraout_EDX_02;
    }
    if (cVar3 == '\x01') {
      FUN_0044aa98(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
    }
  }
  return;
}

