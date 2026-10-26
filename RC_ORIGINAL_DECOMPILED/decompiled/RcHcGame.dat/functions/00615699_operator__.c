/*
 * Replicator::operator[] at 00615699
 * DName * __thiscall operator[](Replicator * this, int param_1)
 * Address ranges: 00615699-006156c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  public: class DName const & __thiscall Replicator::operator[](int)const   Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    public: class DName const & __thiscall Replicator::operator[](int)const 
   
   Library: Visual Studio 2003 Release */

DName * __thiscall Replicator::operator[](Replicator *this,int param_1)

{
  DName *pDVar1;
  
  if ((param_1 < 0) || (9 < param_1)) {
    pDVar1 = (DName *)(this + 0x2c);
  }
  else if ((*(int *)this == -1) || (*(int *)this < param_1)) {
    pDVar1 = (DName *)(this + 0x34);
  }
  else {
    pDVar1 = *(DName **)(this + param_1 * 4 + 4);
  }
  return pDVar1;
}

