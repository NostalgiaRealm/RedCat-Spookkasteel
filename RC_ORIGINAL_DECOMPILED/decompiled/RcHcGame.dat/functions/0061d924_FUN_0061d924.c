/*
 * FUN_0061d924 at 0061d924
 * undefined FUN_0061d924(void)
 * Address ranges: 0061d924-0061d9a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0061d924(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_00747ea4 != 0) &&
      ((DAT_0070ffc0 != (int *)0x0 ||
       (((DAT_0070ffc8 != 0 && (iVar1 = FUN_0061ec63(), iVar1 == 0)) && (DAT_0070ffc0 != (int *)0x0)
        ))))) && (piVar3 = DAT_0070ffc0, param_1 != (uchar *)0x0)) {
    _MaxCount = _strlen((char *)param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = _strlen((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = __mbsnbicoll((uchar *)*piVar3,param_1,_MaxCount), iVar1 == 0)) {
        return *piVar3 + 1 + _MaxCount;
      }
    }
  }
  return 0;
}

