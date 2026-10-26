/*
 * FUN_0052b330 at 0052b330
 * undefined __register FUN_0052b330(int * param_1, int param_2)
 * Address ranges: 0052b330-0052b43b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052b330(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  undefined1 *puVar4;
  int *piVar5;
  
  if (param_2 != 0) {
    iVar1 = FUN_00549b64(param_2);
    iVar2 = FUN_00549b64((int)param_1);
    if (iVar1 != iVar2) {
      FUN_00403d94("AppObjDescs of First and Second AppObjList must match.");
    }
  }
  if (param_1[0x21] != param_2) {
    if (param_1[0x21] != 0) {
      puVar4 = &LAB_0052b620;
      piVar5 = param_1;
      piVar3 = (int *)FUN_00549b80(param_1[0x21]);
      FUN_0045fd0c(piVar3,extraout_EDX,extraout_ECX,puVar4,piVar5);
    }
    param_1[0x21] = param_2;
    if ((param_1[0x21] != 0) && ((char)param_1[0x20] == '\0')) {
      FUN_0052b638(param_1,'\x01');
    }
    if ((param_1[0x21] == 0) && ((char)param_1[0x20] == '\x01')) {
      if (param_1[0x22] == 0) {
        FUN_0052b638(param_1,'\0');
      }
      else {
        FUN_0052b638(param_1,'\x02');
      }
    }
    if (param_1[0x21] != 0) {
      puVar4 = &LAB_0052b620;
      iVar1 = FUN_00549b80(param_1[0x21]);
      FUN_0045fcd0(iVar1,extraout_EDX_00,extraout_ECX_00,(int)puVar4,(int)param_1);
    }
  }
  return;
}

