/*
 * FUN_0046e9dc at 0046e9dc
 * undefined __register FUN_0046e9dc(int * param_1, char param_2, int param_3)
 * Address ranges: 0046e9dc-0046ea11;0046ea3e-0046ead1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x465ca4 slot 5 for TDataLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x465ca4 slot 5 for
   TDataLink. Original bytes unchanged; names and types still inferred. */

void FUN_0046e9dc(int *param_1,char param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\x06') {
    FUN_0046e8d4(param_1);
  }
  else if (*(char *)((int)param_1 + 0x15) != '\0') {
    switch(param_2) {
    case '\0':
    case '\x01':
      if ((char)param_1[6] == '\0') {
        (**(code **)(*param_1 + 0x44))(param_1,param_3);
      }
      break;
    case '\x02':
    case '\x03':
    case '\x04':
      iVar2 = 0;
      if (*(char *)(param_1[1] + 0x2e) != '\x04') {
        iVar1 = *(int *)(*(int *)(param_1[1] + 0x24) + 0x48);
        iVar3 = param_1[4] + param_3;
        iVar4 = param_1[3] + iVar3 + -1;
        if (iVar4 < iVar1) {
          iVar2 = iVar1 - iVar4;
        }
        else if (iVar1 < iVar3) {
          iVar2 = iVar1 - iVar3;
        }
        param_1[4] = iVar2 + iVar3;
      }
      if (param_2 == '\x02') {
        (**(code **)(*param_1 + 0x18))();
      }
      else if (param_2 == '\x03') {
        (**(code **)(*param_1 + 0x1c))(param_1,iVar2);
      }
      else if (param_2 == '\x04') {
        (**(code **)(*param_1 + 0x3c))();
      }
      break;
    case '\x05':
      FUN_0046e918(param_1);
      break;
    case '\a':
      (**(code **)(*param_1 + 0x10))();
      break;
    case '\n':
      (**(code **)(*param_1 + 0x24))(param_1,param_3);
    }
  }
  return;
}

